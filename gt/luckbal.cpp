#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int krr[n];
    for(int j=0;j<n;j++)
        cin>>krr[j];
    vector<pair<int,int>> v;
    //cout<<"Soumik"<<endl;
    for(int i=0;i<n;i++)
        v.push_back(make_pair(arr[i],krr[i]));
    sort(v.begin(),v.end());
    cout<<v[2].first<<endl;
    for(int i=0;i<n;i++)
        {
        if(v[i].second==0)
            sum=sum+v[i].first;
        }
    for(int i=n-1;i>=0&&k>=0;i--)
        {
        if(v[i].second==1)
            {
            sum+=v[i].first;
            k--;
            }
        }
    cout<<sum;
return 0;
}
