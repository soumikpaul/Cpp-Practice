#include <iostream>
using namespace std;
void arrotbyone(int arr[],int n)
{
int i,temp;
temp=arr[0];
for(i=0;i<n-1;i++)
{
arr[i]=arr[i+1];
}
//cout<<temp<<"S"<<endl;
arr[i]=temp;
}
void printarr(int arr[],int n)
{
for(int i=0;i<n;i++)
{
cout<<arr[i];
}
}
int main()
{
int d,n;
cin>>d>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<d;i++)
{
arrotbyone(arr,n);
}
printarr(arr,n);
}
