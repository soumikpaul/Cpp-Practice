#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
void rearrange(int arr[],int n)
{
    int i=-1;
    for(int j=0;j<n;j++)
        {
        if(arr[j]<0)
            {
            ++i;
            swap(&arr[i],&arr[j]);
            }
        }
    int pos=i+1;
    int neg=0;
    while(pos>neg&&pos<n&&arr[neg]<0)
        {
        swap(&arr[neg],&arr[pos]);
        pos++;
        neg+=2;
        }
}            
int main()
{
    int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
