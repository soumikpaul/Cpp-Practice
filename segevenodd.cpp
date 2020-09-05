#include<bits/stdc++.h>
using namespace std;
void seg(int arr[],int n)
{
    int e=n-1;
    int o=0;
    for(int i=0;i<n;i++)
    {
        if(arr[o]%2==1)
        swap(
int main()
{
    int arr={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    seg(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
