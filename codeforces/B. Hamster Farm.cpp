#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>n>>k){
        ll check=1e19,ind,res;
        for(int i=0; i<k; i++){
            cin>>m;
            if((n%m)<check){
                ind=i+1;
                res=m;
                check=n%m;
            }
        }
        if(res>n) cout<<1<<" "<<0<<endl;
        else cout<<ind<<" "<<(n/res)<<endl;
    }
    return 0;
}
