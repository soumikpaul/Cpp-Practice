#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcadefchjd";
    int n=s.length();
    int start,end;
    char arr[n];
    arr[0]=s[0];
    start=0;
    int flag=1;
    int len,max_len=INT_MIN;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]==s[i])
            {
                arr[j]=s[i];
                arr[i]=s[i];
                start=j+1;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            arr[i]=s[i];
        }
        end=i;
        len=end-start+1;
        cout<<"st   end   len"<<start<<end<<len<<endl;
        max_len=max(len,max_len);
        flag=1;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<max_len<<endl;
    return 0;
}
