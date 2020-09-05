#include <bits/stdc++.h>
using namespace std;
int first(int temp[],int low,int high,int x)
{
if(high>=low)
{
int mid=(high+low)/2;
if((mid==0||x>temp[mid-1])&&(temp[mid]==x))
return mid;
if(temp[mid]>x)
{
return first(temp,low,mid-1,x);
}
return first(temp,mid+1,high,x);
}
return -1;
}
void sortacc(int A1[],int A2[],int m,int n)
{
int temp[m],visited[m];
for(int i=0;i<m;i++)
    {
    temp[i]=A1[i];
    visited[i]=0;
    }
sort(temp,temp+m);
int index=0;
for(int i=0;i<n;i++)
{
    int f=first(temp,0,m-1,A2[i]);
    if(f==-1)
    {
    continue;
    }
    for(int j=f;(j<m&&temp[j]==A2[i]);j++)
    {
    A1[index++]=temp[j];
    visited[j]=1;
    }
    }
for(int j=0;j<m;j++)
    {
    if(visited[j]==0)
    {
    A1[index++]=temp[j];
    }
    }
    }
        
int main()
{
int A1[]={2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};

int A2[]={2,1,8,3};
int m=sizeof(A1)/sizeof(A1[0]);
int n=sizeof(A2)/sizeof(A2[0]);
sortacc(A1,A2,m,n);
for(int i=0;i<m;i++)
    cout<<A1[i]<<" ";
}
