#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    double x,y;
    string s,t,str;
    while(cin>>s>>t>>str){
        map<char,char>mp;
        ll cnt=0,state=0;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]=t[i];
        }
        string res="";
        for(int i=0; i<str.length(); i++){
            if(!isalpha(tolower(str[i]))) res+=str[i];
            else res+=mp[tolower(str[i])];
        }
        //cout<<res<<endl;
        for(int i=0; i<str.length(); i++){
            if(isalpha(str[i]) && toupper(str[i])==str[i]){//cout<<" hfuk "<<endl;
                cout<<(char)toupper(res[i]);
            }
            else cout<<res[i];
        }
        cout<<endl;
    }
    return 0;
}

