#include<bits/stdc++.h>
#define ll long long
#define read freopen("in.txt","r",stdin)
using namespace std;

int main()
{
    //read;
    map<char,int>mp;
    int k;
    for(int i=0; i<26; i++){
        cin>>k;
        mp[(char)(97+i)]=k;
    }
    string str;
    cin>>str;
    int m=-1;
    for(int i=0; i<str.length(); i++){
        if(mp[str[i]]>m)
            m=mp[str[i]];
    }
    cout<<m*str.length()<<endl;
    return 0;
}
