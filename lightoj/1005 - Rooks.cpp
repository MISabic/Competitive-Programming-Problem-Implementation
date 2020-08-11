#include<bits/stdc++.h>
using namespace std;

unsigned long long dp[35][35];

unsigned long long solve(int n,int m,int k)
{
    if(dp[n][m]!=-1) return dp[n][m];
    if(k>n || k>m) return 0;
    if(k==0) return 1;
    if(m==1) return n;
    return dp[n][m]=n*solve(n-1,m-1,k-1)+solve(n,m-1,k);
}

int main()
{
    int t,n,k;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        memset(dp,-1,sizeof(dp));
        scanf("%d %d",&n,&k);
        printf("Case %d: %lld\n",i,solve(n,n,k));
    }
    return 0;
}
