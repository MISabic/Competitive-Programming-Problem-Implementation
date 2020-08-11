#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,t,k,m,p,q,r,s,x,y,arr[100100],brr[100100];
    string str;
    while(cin>>n){
        map<string,int>mp;
        for(int i=0; i<n; i++){
            cin>>str;
            if(mp[str]==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
                mp[str]=1;
            }
        }
    }
    return 0;
}

