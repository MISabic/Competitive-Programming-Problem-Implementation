#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c,arr[100100];
    string str;
    double x,y;
    map<string,int>mp;
    ll res=1;
    vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }
    while(cin>>n>>m){
        if(n>50){
            cout<<m<<endl;
        }
        else{
            ll chidori=m%vec[n-1];
            cout<<chidori<<endl;
        }
    }
    return 0;
}
