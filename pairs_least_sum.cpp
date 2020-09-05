#include <bits/stdc++.h>
using namespace std;
void findsmall(int arr1[],int n1,int arr2[],int n2,int k)
{
if(k>n1*n2)
return ;
int index2[n1];
memset(index2,0,sizeof(index2));
while(k>0)
{
int min_sum=INT_MAX;
int min_index=0;
for(int i=0;i<n1;i++)
{
if(index2[i]<n2&&arr1[i]+arr2[index2[i]]<min_sum)
{
min_sum=arr1[i]+arr2[index2[i]];
min_index=i;
}
}
cout << "(" << arr1[min_index] << ", "
             << arr2[index2[min_index]] << ") ";
 
        index2[min_index]++;
 
        k--;
        }
        }
int main()
{
int arr1[]={1,2,3,4};
int n1=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={5,6,7,8};
int n2=sizeof(arr2)/sizeof(arr2[0]);
int k=5;
findsmall(arr1,n1,arr2,n2,k);
return 0;
}
