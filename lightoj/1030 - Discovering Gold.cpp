#include<bits/stdc++.h>
using namespace std;

long long t,n,cnt,arr[105],dp[105][10];

long long solve(int pos,int dv)
{
    cout<<pos<<" "<<arr[pos]<<" "<<dv<<endl;
    if(pos==n-1) return arr[pos];

    if(dp[pos][dv]!=-1){
        ++cnt;
        return dp[pos][dv];
    }

    long long res=0;
    for(int i=1; i<=6 && pos+i<n; i++){
        res+=solve(pos+i,i);
        cout<<pos<<" here "<<res<<endl;
    }
    return dp[pos][dv]=res;
}

int main()
{
    scanf("%lld",&t);
    for(int i=1; i<=t; i++){
        scanf("%lld",&n);
        for(int j=0; j<n; j++){
            scanf("%lld",&arr[j]);
        }
        cnt=0;
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %lld\n",i,solve(0,0));
    }
    return 0;
}
