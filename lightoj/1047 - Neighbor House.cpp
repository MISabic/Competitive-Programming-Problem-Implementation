#include<bits/stdc++.h>
#define x 100000000
using namespace std;

int t,n,arr[25][5],dp[25][5];

int solve(int pos,int c)
{
    if(pos==n) return 0;
    if(dp[pos][c]==x){
        for(int i=1; i<=3; i++){
            if(i!=c){
                dp[pos][c]=min(dp[pos][c],arr[pos][i]+solve(pos+1,i));
            }
        }
    }
    return dp[pos][c];
}

int main()
{
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            scanf("%d %d %d",&arr[j][1],&arr[j][2],&arr[j][3]);
        }
        for(int j=0; j<n+2; j++){
            for(int k=0; k<4; k++){
                dp[j][k]=x;
            }
        }
        int res=solve(0,0);
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
