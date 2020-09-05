#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int> > findsubarr(int arr[],int n)
{
    vector<pair<int,int>> out;
    unordered_map<int,vector<int>> map;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            out.push_back(make_pair(0,i));
        }
        if(map.find(sum)!=map.end())
        {
            vector<int> vc=map[sum];
            for(auto it=vc.begin();it<vc.end();it++)
            {
                out.push_back(make_pair(*it+1,i));
                cout<<"vc  "<<vc[*it]<<endl;
            }
         }
         map[sum].push_back(i);
      }
      for(auto it:map)
      {
           cout<<it.first<<"map[it]   it"<<it.second<<endl;
      }  
      return out;
}
void print(vector<pair<int, int>> out)
{
    for (auto it = out.begin(); it != out.end(); it++)
        cout << "Subarray found from Index " <<
            it->first << " to " << it->second << endl;
}

int main()
{
    int arr[]={6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>> z=findsubarr(arr,n);
    if (z.size() == 0)
        cout << "No subarray exists";
    else
    
        print(z);
}
    
