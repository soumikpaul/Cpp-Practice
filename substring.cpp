#include <bits/stdc++.h>
using namespace std;
void sub(string s)
{
    int n=s.length();
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<s.substr(j,i-j)<<endl;
        }
    }
}
int main()
{
    string s="abcde";
    sub(s);
    return 0;
}
