#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long t,p,q,r,parr[100010],qarr[100010],rarr[100010],pcum[100010],rcum[100010];

void precalc(long long *arr,long long *cum,long long n)
{
    cum[0]=arr[0];
    for(int i=1; i<n; i++){
        cum[i]=(cum[i-1]+arr[i])%mod;
    }
}

int main()
{
    scanf("%lld",&t);
    while(t--){
        long long res=0;
        scanf("%lld %lld %lld",&p,&q,&r);

        for(int i=0; i<p; i++) scanf("%lld",&parr[i]);
        sort(parr,parr+p);
        precalc(parr,pcum,p);

        for(int i=0; i<q; i++) scanf("%lld",&qarr[i]);
        sort(qarr,qarr+q);

        for(int i=0; i<r; i++) scanf("%lld",&rarr[i]);
        sort(rarr,rarr+r);
        precalc(rarr,rcum,r);

        for(int i=0; i<q; i++){
            int ind1=(upper_bound(parr,parr+p,qarr[i])-parr)-1;
            int ind2=(upper_bound(rarr,rarr+r,qarr[i])-rarr)-1;
            if(ind1<0 || ind2<0) continue;

            long long mul1=(ind1+1)*qarr[i];
            long long mul2=(ind2+1)*qarr[i];

            //cout<<ind1<<"    "<<ind2<<endl;
            res=(res%mod+(((pcum[ind1]+mul1%mod)%mod)*((rcum[ind2]+mul2%mod)%mod))%mod)%mod;
        }
        printf("%lld\n",res);
    }
    return 0;
}
