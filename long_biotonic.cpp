#include <bits/stdc++.h>
using namespace std;
int lbs(int arr[],int n)
{
int lcs[n];
int lds[n];
for(int i=0;i<n;i++)
{
lcs[i]=1;
lds[i]=1;
}
for(int i=1;i<n;i++)
{
for(int j=0;j<i;j++)
{
if((arr[i]>arr[j])&&(lcs[i]<lcs[j]+1))
{
lcs[i]=lcs[j]+1;
}
}
}
for(int i=n-2;i>=0;i--)
{
for(int j=n-1;j>i;j--)
{
if((arr[i]>arr[j])&&(lds[i]<lds[j]+1))
{
lds[i]=lds[j]+1;
}
}
}
int x;
int l=lcs[0]+lds[0]-1;
for(int i=0;i<n;i++)
{
x=lcs[i]+lds[i]-1;
if(x>l)
l=x;
}
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
int k=lbs(arr,n);
cout<<k;
}
