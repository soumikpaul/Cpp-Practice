#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    arr[0]=arr[1]=0;
    for(int i=2;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i-2]+2;
        }
        else
        {
            arr[i]=arr[i-1]/2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[n-1];
    return 0;
}   
