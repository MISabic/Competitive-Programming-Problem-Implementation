#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t){
        for(int i=0; i<s.size(); i++){
            cout<<t[(tolower(s[i])-97)];
        }
        cout<<endl;
    }
    return 0;
}
