#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    int st=0;
    int arr[2*n-1][2*n-1]={0};
    
    for(int j=0;j<n;j++)
    {
    
    for(int i=st;i<2*n-1-st;i++)
    {
        arr[st][i]=k;
        arr[2*n-2-st][i]=k;
    }
    for(int z=st;z<2*n-1-st;z++)
    {
        arr[z][st]=k;
        arr[z][2*n-2-st]=k;
    }
    
    k--;
    st++;
    }
    
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
            cout<<arr[i][j];
        cout<<endl;
    }
}
