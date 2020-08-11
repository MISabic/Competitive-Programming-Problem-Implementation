#include<bits/stdc++.h>
using namespace std;

string str;
int len,dp[105][105];

int solve(int i,int j)
{
    if(dp[i][j]!=-1) return dp[i][j];
    if(i>j) return 0;
    if(str[i]==str[j]){
        return dp[i][j]=solve(i+1,j-1);
    }
    else{
        return dp[i][j]=1+min(solve(i,j-1),solve(i+1,j));
    }
    return dp[i][j];
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        cin>>str;
        memset(dp,-1,sizeof(dp));
        len=str.length();
        printf("Case %d: %d\n",i,solve(0,len-1));
    }
    return 0;
}
