#include <bits/stdc++.h>
using namespace std;
int main()
{
     string s="Soumik-Paul-is-mad";
     string *token=strtok(s,"-");
     while(token!=NULL)
     {
        cout<<token<<endl;
        token=strtok(NULL,"-");
     }
}
