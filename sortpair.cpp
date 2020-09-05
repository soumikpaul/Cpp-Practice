#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> a,const pair<int,int>b)
{
    return (a.second<b.second);
}
int main()
{
    int A[]={5,1,50,20,17};
    int B[]={1,8,3,6,2};
    int n=sizeof(A)/sizeof(A[0]);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
        {
        v.push_back(make_pair(A[i],B[i]));
        }
    sort(v.begin(),v.end(),sortbysec);
     for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << v[i].first << " "
             << v[i].second << endl;
    }
    return 0;
}
