#include<bits/stdc++.h>
using namespace std;

long long t,m,n,arr[15],dp[15][15];

long long solve(long long v,long long k,long long num)
{
    if(k==n) return 1;
    if(dp[v][k]!=-1) return dp[v][k];

    long long ans=0;
    for(int i=0; i<m; i++){
        if(abs(arr[i]-v)<=2 || v==0){
            ans+=solve(arr[i],k+1,num*10+arr[i]);
        }
    }
    return dp[v][k]=ans;
}

int main()
{
    scanf("%lld",&t);
    for(int i=1; i<=t; i++){
        scanf("%lld %lld",&m,&n);
        for(int j=0; j<m; j++){
            scanf("%lld",&arr[j]);
        }
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %lld\n",i,solve(0,0,0));
    }
    return 0;
}
