#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void shuffle(int arr[],int n)
{
    int o=1;
    int e=(n-1)/2+1;
    for(int i=0;i<n/2;i++)
        {
        swap(&arr[o],&arr[e]);
        for(int j=o+1;j<e;j++)
        {   
            swap(&arr[j],&arr[e]);
        }
        o+=2;
        e++;
        /*for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;*/
        }
}
int main()
{
    int arr[]={1,3,5,7,2,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    shuffle(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
