#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    unsigned long long n,m;
    while(cin>>n>>m){
        unsigned long long ans=0;
        for(long long i=1; i<=min(n,m); i++){
            ans=(ans+(i*(n-i+1)*(m-i+1))%mod)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
