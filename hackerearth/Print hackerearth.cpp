#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    char arr[25]={'h','a','c','k','e','r','n'};
    while(cin>>n>>str){
        map<char,int>mp;
        for(int i=0; i<n; i++){
            if(str[i]=='h' || str[i]=='a' || str[i]=='c' || str[i]=='k' || str[i]=='e' || str[i]=='r' || str[i]=='n'){
                mp[str[i]]++;
            }
        }
        map<char,int>::iterator it=mp.begin();
        int mn=999999999;
        for(it; it!=mp.end(); it++){
            if(it->first=='a' || it->first=='k' || it->first=='r'){
                if((it->second/2)<mn){
                    mn=it->second;
                }
            }
            else{
                if(it->second<mn){
                    mn=it->second;
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
