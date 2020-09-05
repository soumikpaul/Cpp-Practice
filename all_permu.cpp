#include<bits/stdc++.h>
using namespace std;
void swap(char *a, char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void permute(string s,int l, int r)
{
    int i;
    if(l==r)
        cout<<s<<endl;
    else
        {
        for(i=l;i<=r;i++)
            {
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
            }
        }
}
int main()
{
    string s="DBCA";
    sort(s.begin(),s.end());
    int n=s.length();
    permute(s,0,n-1);
}
