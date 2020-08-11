#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>k>>m){
        ll cnt=0,chidori=0,x;

        map<ll,vector<ll> >mp;

        for(int i=0; i<n; i++){
            cin>>x;
            mp[x%m].push_back(x);
        }

        for(auto x:mp){
            //cout<<x.first<<"   "<<x.second.size()<<endl;
            if(x.second.size()>=k){
                cout<<"Yes"<<endl;
                int range=min(k,(ll)x.second.size());
                for(int i=0; i<range; i++){
                    cout<<x.second[i]<<" ";
                }
                cout<<endl;
                chidori=1;
                break;
            }
        }

        if(chidori==0)
            cout<<"No"<<endl;
    }
    return 0;
}
