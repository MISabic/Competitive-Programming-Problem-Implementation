#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str[100],test;
    while(cin>>n){
        string fin[]={"***ABCDE","FGHIJKLM","NOPQRSTU","VWXYZ***"};
        int c=0;
        for(int i=0; i<n; i++){
            cin>>str[i];
        }
        cin>>test;
        map<char,int>mp;
        int len=test.length();
        for(int i=0; i<n; i++){
            if(str[i].substr(0,len)==test){
                mp[str[i][len]]=1;
            }
        }
        for(int i=0; i<4; i++){
            for(int j=0; j<8; j++){
                if(mp[fin[i][j]]!=1)
                    cout<<'*';
                else
                    cout<<fin[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}

