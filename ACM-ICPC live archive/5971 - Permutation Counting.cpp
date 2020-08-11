#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long t,n,c=0,arr[1000100];

int main()
{
    arr[1]=arr[2]=1;
    for(int i=3; i<1000100; i++){
        arr[i]=(((arr[i-1]*(i-1))%mod)+((arr[i-2]*(i-2))%mod))%mod;
    }
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",++c,arr[n]);
    }
    return 0;
}
