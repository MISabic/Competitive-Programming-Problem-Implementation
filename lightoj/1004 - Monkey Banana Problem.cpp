#include<bits/stdc++.h>
using namespace std;

int n,arr[210][210],dp[210][210];

int solve(int i,int j)
{

    if(i==n) return dp[i][j]=arr[i][j];
    if(i<1 || i>n || j<1 || j>(n/2+1)) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    if(i<(n/2+1)){
        return dp[i][j]=arr[i][j]+max(solve(i+1,j),solve(i+1,j+1));
    }
    else{
        if(j==1) return dp[i][j]=arr[i][j]+solve(i+1,j);
        else return dp[i][j]=arr[i][j]+max(solve(i+1,j-1),solve(i+1,j));
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);

        for(int j=0; j<205; j++)
            for(int k=0; k<205; k++)
                dp[j][k]=-1;

        memset(arr,0,sizeof(arr));

        for(int j=1; j<=n; j++){
            for(int k=1; k<=j; k++){
                scanf("%d",&arr[j][k]);
            }
        }
        for(int j=n+1; j<=2*n-1; j++){
            for(int k=1; k<=2*n-j; k++){
                scanf("%d",&arr[j][k]);
            }
        }

        n=2*n-1;

        int res=solve(1,1);
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
