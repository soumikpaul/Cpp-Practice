#include<bits/stdc++.h>
using namespace std;
bool mycomp(int a,int b)
{   
    if((a>=0&&b>=0)||(a<0&&b<0))
        return false;
    if(a=0)
        return true;
    if(a>=0&&b<0)
        return false;
}
int main()
{   
    int arr[]={-6,9,7,-8,-1,-3,5,2,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,mycomp);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
