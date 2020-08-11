#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,a,b,k,l;
    while(cin>>n>>a>>b){
        ll res=0;
        cin>>l;
        for(int i=1; i<n; i++){
            cin>>k;
            res+=min((k-l)*a,b);
            l=k;
        }
        cout<<res<<endl;
    }
    return 0;
}
