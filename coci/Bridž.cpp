#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    map<char,int>mp;
    mp['A']=4;
    mp['K']=3;
    mp['Q']=2;
    mp['J']=1;
    while(cin>>n){
        int c=0;
        for(int i=0; i<n; i++){
            cin>>str;
            for(int i=0; i<str.length(); i++){
                c+=mp[str[i]];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
