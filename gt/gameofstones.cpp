#include<bits/stdc++.h>
using namespace std;
void find(int pos[],int n)
{
    pos[0]=0;
    pos[1]=1;
    pos[2]=0;
    pos[3]=1;
    pos[4]=1;
    pos[5]=1;
    pos[6]=1;
    pos[7]=0;
    for(int i=5;i<200;i++)
    {   
        if(!pos[i-1]||!pos[i-3]||!pos[i-4])
            pos[i]=1;
     }
     cout<<pos[n];
}
int main()
{
    int pos[200]={0};
    int n;
    cin>>n;
    find(pos,n);
return 0;
}
