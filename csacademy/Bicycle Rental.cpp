#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,s,u,v;
    while(cin>>n){
        long long mn=9999999999;
        for(int i=0; i<n; i++){
            cin>>p>>q>>r;
            long long res=p+r;
            res += max(q-p,0LL);
            mn=min(mn,res);
        }
        cout<<mn<<endl;
    }
    return 0;
}
