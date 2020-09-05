#include <bits/stdc++.h>
using namespace std;
void newsort(int arr[],int n,int x)
{
multimap <int ,int > m;
for(int i=0;i<n;i++)
    m.insert(make_pair(abs(arr[i]-x),arr[i]));
int i=0;
for(auto it=m.begin();it!=m.end();it++)
    arr[i++]=(*it).second;
}
int main()
{
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
newsort(arr,n,x);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
