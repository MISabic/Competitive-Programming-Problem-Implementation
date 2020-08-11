#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll n,r,a,b,c,d;
    map<ll,ll>mp;
    while(cin>>r){
        for(int i=0; i<r; i++){
            cin>>a;
            mp[a]++;
        }
        ll sum=0;
        map<ll,ll>::iterator it=mp.begin();
        for(it; it!=mp.end(); it++){
            sum+=((it->si)/2);
        }
        cout<<sum<<endl;
        mp.clear();
    }
    return 0;
}

