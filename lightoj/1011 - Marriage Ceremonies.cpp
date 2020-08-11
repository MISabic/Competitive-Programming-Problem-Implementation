#include<bits/stdc++.h>
using namespace std;

int t,n,arr[20][20],dp[20][1<<17];

int solve(int m_i,int mask)
{
    if(m_i==n) return 0;
    if(dp[m_i][mask]!=-1) return dp[m_i][mask];

    for(int i=0; i<n; i++)
    {
        if(!(mask & (1<<i))){
            dp[m_i][mask]=max(dp[m_i][mask],arr[m_i][i]+solve(m_i+1,mask | (1<<i)));
        }
    }
    return dp[m_i][mask];
}

int main()
{
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                scanf("%d",&arr[j][k]);
            }
        }
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n",i,solve(0,0));
    }
    return 0;
}
