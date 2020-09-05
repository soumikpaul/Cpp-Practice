#include<bits/stdc++.h>
using namespace std;
void rotatebyone(int arr[],int n)
{
    int temp,i;
    temp=arr[0];
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[i]=temp;
}
void rotate(int arr[],int n,int k)
{
    while(k>0)
    {   
        rotatebyone(arr,n);
        k--;
    }
}    
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int k;
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n,k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
