#include <bits/stdc++.h>
using namespace std;
void subs(string s)
{
    int n=s.length();
    int pow_size=pow(2,n);
    for(int i=0;i<pow_size;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                {
                if(s[j]!=" ")
                    cout<<s[j];
                }
            
        }
        cout<<endl;
    }
}
int main()
{
    string s="abcd";
    subs(s);
}
