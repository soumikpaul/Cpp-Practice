#include <bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
string s="";
int carry=0,rem=0;
int p=0;
for(int i=max(s1.length(),s2.length())-1;i>=0;i--)
{
    p=s1[i]-'0'+s2[i]-'0'+carry;
    cout<<p<<endl;
    if(p>9)
    {
    carry=p/10;
    rem=p%10;
    s.append(to_string(rem));
    }
    else
    {
    s.append(to_string(p));
    }
    }
/*while(carry>0)
{
rem=carry%10;
carry=carry/10;
s.append(to_string(rem));
}*/
reverse(s.begin(),s.end());
return s;
}    
int main()
{
string s1="120";
string s2="19";
string s3=add(s1,s2);
cout<<s3<<endl;
return 0;
}
