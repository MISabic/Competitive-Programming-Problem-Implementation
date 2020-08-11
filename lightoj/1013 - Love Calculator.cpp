#include<bits/stdc++.h>
using namespace std;

long long t,l1,l2,len,dp[35][35],dp2[35][35][10];
string s1,s2;

int subsequenceLength(int i,int j)
{
    if(i==l1) return l2-j;
    if(j==l2) return l1-i;
    if(dp[i][j]!=-1) return dp[i][j];

    if(s1[i]==s2[j]) return dp[i][j]=1+subsequenceLength(i+1,j+1);
    else return dp[i][j]=1+min(subsequenceLength(i+1,j),subsequenceLength(i,j+1));

    return dp[i][j];
}

long long subsequenceCount(int i,int j,int to)
{
    if(i==l1 || j==l2) return (to+(l1-i)+(l2-j))==len;

    if(dp2[i][j][to]!=-1) return dp2[i][j][to];

    if(s1[i]==s2[j]) return dp2[i][j][to]=subsequenceCount(i+1,j+1,to+1);
    else return dp2[i][j][to]=subsequenceCount(i+1,j,to+1)+subsequenceCount(i,j+1,to+1);

    return dp2[i][j][to];
}

int main()
{
    scanf("%lld",&t);
    for(int i=1; i<=t; i++){
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        cin>>s1>>s2;

        l1=s1.length();
        l2=s2.length();

        len=subsequenceLength(0,0);
        printf("Case %d: %lld %lld\n",i,len,subsequenceCount(0,0,0));
    }
    return 0;
}
