#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

vector<ll>vec;

int main()
{
    long long k,m,n,p,q,r,s,t,u,v;
    while(cin>>n>>k){
        ll sum=0;
        for(int i=0; i<n; i++){
            cin>>p>>q;
            sum+=(ll)min(p,q);
            if(p<q){
                vec.pb(min(p,q-p));
            }
        }
        sort(vec.begin(),vec.end(),greater<ll>());
        for(int i=0; i<k && i<vec.size(); i++){
            sum+=vec[i];
        }
        cout<<sum<<endl;
        vec.clear();
    }
    return 0;
}

