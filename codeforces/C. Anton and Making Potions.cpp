#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<ll,ll>pi[200020];

ll v1[200020],v2[200020];

int main()
{
    ll n,m,k,x,s;
    while(cin>>n>>m>>k>>x>>s){
        ll a=0,b=0;
        for(int i=0; i<m; i++)
            cin>>pi[i].first;
        for(int i=0; i<m; i++)
            cin>>pi[i].second;
        for(int i=0; i<k; i++)
            cin>>v1[i];
        for(int i=0; i<k; i++)
            cin>>v2[i];
        ll mn=x*n,flag=0,lowest=0,res,tempmn=INFINITY,test=0;
        for(int i=0; i<m; i++){
            if(pi[i].second<=s){
                tempmn=min(tempmn,pi[i].first);
                test=1;
            }
        }
        if(test==1)
            mn=min(tempmn*n,mn);
        for(int i=0; i<k; i++){
            if(v1[i]>=n && v2[i]<=s){
                cout<<0<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1) continue;
        pair<ll,ll>tp;
        for(int i=0; i<k; i++){
            if(v1[i]<=n && v2[i]<=s){
                tp.first=v1[i],tp.second=v2[i];
            }
        }
        mn=min(mn,(n-tp.first)*x);
        flag=0;
        for(int i=0; i<m; i++){
            ll tempx=pi[i].first;
            if(s>=pi[i].second){
                ll temps=s-pi[i].second;
                ll tt=upper_bound(v2,v2+k,temps)-v2;
                if(tt-1>=0)
                    res=(n-v1[tt-1])*tempx;
                else
                    res=n*tempx;
                if(res<mn) mn=res;
                flag=1;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
