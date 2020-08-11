#include<bits/stdc++.h>
using namespace std;

string str;
long long len,dp[65][65];

long long solve(int i,int j)
{
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];

    if(str[i]==str[j]) return dp[i][j]=1+solve(i+1,j)+solve(i,j-1);
    else return dp[i][j]=solve(i,j-1)+solve(i+1,j)-solve(i+1,j-1);

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
        printf("Case %d: %lld\n",i,solve(0,len-1));
    }
    return 0;
}
