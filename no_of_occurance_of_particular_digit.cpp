#include <bits/stdc++.h>
using namespace std;
int find(int n)
{
    int total=0;
    if(n%10>=3)
        total+=n/10;
    else
        total+=n/10-1;
    if(n/10==3)
        total+=n%10+1;
    if(n/10>3)
        total+=10;
    return total;
}
    
int main()
{
int n=36;
int p=find(n);
cout<<p<<endl;
return 0;
}
