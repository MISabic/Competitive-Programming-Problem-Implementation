#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100100],brr[100100];

int main()
{
    ll t,k,n,m,p,q,r,s;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>str){
        ll cnt=0,one=0,two=0;
        for(int i=1; i<str.length(); i++){
            if(str[i-1]=='S' && str[i]=='F'){
                ++one;
            }
            else if(str[i-1]=='F' && str[i]=='S'){
                ++two;
            }
        }
        if(one>two)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
