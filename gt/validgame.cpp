#include<bits/stdc++.h>
using namespace std;
void validity(int arr[],int players,int n)
{
    int spec=3;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==spec)
            {
            cout<<"Invalid"<<endl;
            return;
            }
        spec=6-arr[i]-spec;
    }
    cout<<"Valid"<<endl;
return;
}    
int main()
{   
    int players=3;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    validity(arr,players,n);
return 0;
}
