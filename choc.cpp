#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m,diff,min_diff=INT_MAX;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
for(int i=0;i<n-m;i++)
{
diff=arr[i+m-1]-arr[i];
min_diff=min(diff,min_diff);
}
cout<<min_diff;
return 0;
}
