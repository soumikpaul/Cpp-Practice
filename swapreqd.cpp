#include<bits/stdc++.h>
using namespace std;
int minimum(int a,int b)
{
    return a<b?a:b;
}
void swapreq(int arr[],int n,int k)
{
    int l,count=0,min,loc_min;
    int u=k-1;
    for(int i=0;i<n;i++)
        {
        if(arr[i]<=k)
            count++;
        }
    int bad=0;
    int ans=bad;
    for(int j=0;j<count;j++)
        {
        if(arr[j]>k)
            bad++;
        }
    for(int j=count,l=0;j<n;l++,j++)
        {
        if(arr[l]>count)
            bad--;
        if(arr[j]>count)
            bad++;
        ans=minimum(ans,bad);
        }
cout<<bad<<endl;
}        
int main()
{
    int arr[]={8,5,2,4,1,6,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    swapreq(arr,n,k);
    return 0;
}
