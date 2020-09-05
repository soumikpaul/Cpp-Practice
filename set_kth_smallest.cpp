#include <bits/stdc++.h>
using namespace std;
void findsmallestk(int arr[],int size,int k)
{
    set<int> s;
    for(int i=0;i<size;i++)
    
        s.insert(arr[i]);
    auto it=s.begin();
    for(int i=0;i<k-1;i++)
        it++;
    cout<<*it<<endl;
}        
int main()
{
    int arr[]={1,2,3,4,5,6,7,5,2,3,1};
    int k;
    cin>>k;
    int size=sizeof(arr)/sizeof(arr[0]);
    findsmallestk(arr,size,k);
    return 0;
}
