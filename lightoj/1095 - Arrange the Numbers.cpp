#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long arr[1010];

void derangement()
{
    arr[0]=1;
    arr[1]=0;
    arr[2]=1;
    for(long long i=3; i<=1005; i++){
        arr[i]=(i-1)*(arr[i-1]+arr[i-2])%mod;
    }
}

long long ncr[1010][1010];

void combination()
{
    for(long long i=0; i<=1005; i++){
        for(long long j=0; j<=i; j++){
            if(j==0)
                ncr[i][j]=1;
            else
                ncr[i][j]=(ncr[i-1][j]+ncr[i-1][j-1])%mod;
        }
    }
}

int main()
{
    derangement();
    combination();
    long long t,n,m,k,c=0;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        long long res=0;//ncr[m][k];
        for(int i=m-k; i<=n-k; i++){
            res=(res+((arr[i]*ncr[n-m][(i-m+k)])%mod))%mod;
        }
        printf("Case %lld: %lld\n",++c,(res*ncr[m][k])%mod);
    }
    return 0;
}
