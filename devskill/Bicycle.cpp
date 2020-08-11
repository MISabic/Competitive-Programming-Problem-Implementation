#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
using namespace std;

int main()
{
    ll n,t,p,q,c=0,r,k,s,arr[100000];
    double a,b;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>k>>s;
        ll v1=k,v2=s;
        for(int i=1; i<n; i++){
            cin>>k>>s;
            if(k<v1){
                v1=k,v2=s;
            }
            else if(v1==k){
                if(s<v2){
                    v2=s;
                }
            }
        }
        printf("Case %lld: %lld %lld\n",++c,v1,v2);
    }
    return 0;
}
