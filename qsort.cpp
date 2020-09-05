#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
int partition(int A[],int B[],int low,int high)
{
    int pivot=A[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {   
        if(A[j]<=pivot)
        {
            i++;
            swap(&A[i],&A[j]);
            swap(&B[i],&B[j]);
        }
     }
     swap(&A[i+1],&A[high]);
     swap(&B[i+1],&B[high]);
     return i+1;
}
void qsort(int A[],int B[],int low,int high)
{
    if(low<high)
    {
    int p;
    p=partition(A,B,low,high);
    qsort(A,B,low,p-1);
    qsort(A,B,p+1,high);
    }
}
int main()
{
    int B[]={2,3,8,10,14};
    int A[]={5,12,7,20,3};
    int n=sizeof(A)/sizeof(A[0]);
    qsort(A,B,0,n-1);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<B[i]<<" ";
}
    
