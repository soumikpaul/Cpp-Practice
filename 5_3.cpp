#include <iostream>
#include <string.h>
using namespace std;
int main()
{
int n;
string s="";
cin>>n;
if(n<3)
{
cout<<-1<<endl;
return 0;
}
for(int i=0;i<n;i++)
{
int x1=(n-3*i)%5;
//cout<<x1<<endl;

int x2=(n-3*i)/5;
//cout<<x2<<endl;
if(x1==0)
{
for(int j=0;j<5*x2;j++)
{
cout<<5;
}
for(int k=0;k<n-5*x2;k++)
{
cout<<3;
}
break;
}

}
//cout<<s<<endl;
return 0;
}
