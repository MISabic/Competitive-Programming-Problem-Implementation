#include<bits/stdc++.h>
using namespace std;

long long mod=10,m[2][2]={{1,1},{1,0}};

long long multiply(long long f[2][2],long long m[2][2])
{
    int w=(f[0][0]*m[0][0])%mod+(f[0][1]*m[1][0])%mod;
    int x=(f[0][0]*m[1][0])%mod+(f[0][1]*m[1][1])%mod;
    int y=(f[1][0]*m[0][0])%mod+(f[1][1]*m[1][0])%mod;
    int z=(f[1][0]*m[1][0])%mod+(f[1][1]*m[1][1])%mod;
    f[0][0]=w%mod;
    f[0][1]=x%mod;
    f[1][0]=y%mod;
    f[1][1]=z%mod;
}

void power(long long f[2][2],long long n)
{
    if(n==0 || n==1) return ;
    power(f,n/2);
    multiply(f,f);
    if(n%2!=0)
        multiply(f,m);
}

long long fib(long long f[2][2],long long n)
{
    power(f,n);
    return f[0][0];
}

int main()
{
    long long t,n,m,c=0;
    cin>>t;
    while(t--){
        cin>>n;
        long long f[2][2]={{1,1},{1,0}};
        if(n==0) printf("Case %lld: 0 is the last digit.\n",++c);
        else printf("Case %lld: %lld is the last digit.\n",++c,fib(f,n-1));
    }
    return 0;
}

