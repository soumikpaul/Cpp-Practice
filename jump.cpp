#include <bits/stdc++.h>
using namespace std;
int minJumps(int arr[],int n)
{
    int *jump=new int[n];
    if(arr[0]==0)
        return INT_MAX;
    
    jump[0]=0;
    for(int i=1;i<n;i++)
    {
        jump[i]=INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(jump[j]!=INT_MAX&&i<=j+arr[j])
                {
                jump[i]=min(jump[i],jump[j]+1);
                break;
                }
        }
    }
    return jump[n-1];
}
int main()
{
    int arr[] = {1, 3, 6, 1, 0, 9};
    int size = sizeof(arr)/sizeof(int);
    printf("Minimum number of jumps to reach end is %d ", minJumps(arr,size));
    return 0;
}
