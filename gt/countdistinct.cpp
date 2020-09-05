#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    set<int> p;
    for(int i=0;i<n;i++)
        p.insert(arr[i]);
    cout<<"No is "<<p.size()<<endl;
 return 0;
 }
