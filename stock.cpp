#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
cout<<"s"<<endl;
vector<int> buy;
vector<int> sell;
int i=0;
while(i<n-1)
{
while(i<n-1&&arr[i]>=arr[i+1])
{
i++;
}
if(i==n-1)
    break;

buy.push_back(i);
while(i<n&&arr[i]>=arr[i-1])
    i++;
i--;
sell.push_back(i);
i++;
}
for(int i=0;i<sell.size();i++)
{
    cout<<buy[i]<<"        "<<sell[i]<<endl;
}
return 0;
}

