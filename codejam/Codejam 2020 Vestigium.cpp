#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n;
    scanf("%lld",&t);
    for(int i=1; i<=t; i++){
        scanf("%lld",&n);
        long long arr[n+5][n+5],tr[105],tc[105],trace=0,r=0,c=0;
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                scanf("%lld",&arr[j][k]);
                if(j==k) trace+=arr[j][k];
            }
        }
        for(int j=0; j<n; j++){
            memset(tr,0,sizeof(tr));
            memset(tc,0,sizeof(tc));
            long long fr=0,fc=0;
            for(int k=0; k<n; k++){
                (!tr[arr[j][k]])?(tr[arr[j][k]]=1):(fr=1);
                (!tc[arr[k][j]])?(tc[arr[k][j]]=1):(fc=1);
            }
            r+=fr,c+=fc;
        }
        printf("Case #%d: %lld %lld %lld\n",i,trace,r,c);
    }
    return 0;
}
