#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="01011101011101011";
    for(int i=0;i<s1.length();i++)
    {
    if(s1[i]=='0'&&s1[i+1]=='1'&&s1[i+2]=='0')
    {
    int j=s1.find("010");
    //cout<<j<<endl;
    s1.replace(j,3,"");
    }
    }
    cout<<s1<<endl;
    string s2="Soumik Paul is mad";
    s2.erase(2,3);
    
    cout<<s2<<endl;
    string s3=s2.substr(3,5);
    cout<<s3<<endl;
    return 0;
}
