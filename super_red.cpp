#include <iostream>
#include <string.h>
using namespace std;

string super_reduced_string(string s){
    // Complete this function
    string p="";
    int q=s.length();
    for(int i=0;i<s.length();i++)
    {
        //char r=s[i];
        if(s[i]==s[i+1])
        {
            
            p.append(s,i+2,q-i-2);
            if(p.length()==0)
            {
                cout<<"Empty String"<<endl;
                break;
            }
            cout<<p<<endl;
            break;
        }
        else 
            p.append(s,i,1); 
    }
    super_reduced_string(p);
    return p;
    cout<<p<<endl;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    //cout << result << endl;
    return 0;
}

