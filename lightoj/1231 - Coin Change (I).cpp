#include<bits/stdc++.h>
#define ull unsigned long long
#define mod 100000007
using namespace std;

ull t,n,k,arr[150],coins[150],dp[100][1005];

ull solve(int i,int total)
{
    //cout<<arr[pos]<<" "<<coins[pos]<<" "<<total<<endl;
    if(total==k) return 1;

    if(i==n || total>k) return 0;

    if(dp[i][total]!=-1) return dp[i][total];

    ull ans=0;
    for(int j=0; j<=coins[i]; j++){
        ans+=solve(i+1,total+arr[i]*j);
        ans%=mod;
    }
    return dp[i][total]=ans;
}

int main()
{
    scanf("%llu",&t);
    for(int i=1; i<=t; i++){
        scanf("%llu %llu",&n,&k);
        memset(dp,-1,sizeof(dp));
        for(int j=0; j<n; j++){
            scanf("%llu",&arr[j]);
        }
        for(int j=0; j<n; j++){
            scanf("%llu",&coins[j]);
        }
        printf("Case %d: %llu\n",i,solve(0,0));
    }
    return 0;
}
