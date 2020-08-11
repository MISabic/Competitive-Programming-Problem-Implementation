#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,m,p,q,r,s,k,u,v;
    while(cin>>n>>k){
        vector<ll>vec;
        ll sr=sqrt(n);
        for(ll i=1; i<=sr; i++){
            if(n%i==0){
                vec.pb(i);
                if(i*i!=n) vec.pb(n/i);
            }
        }
        sort(vec.begin(),vec.end());
        if(vec.size()<k) cout<<-1<<endl;
        else cout<<vec[k-1]<<endl;
    }
    return 0;
}
