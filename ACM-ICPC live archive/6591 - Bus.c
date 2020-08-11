#include<stdio.h>

int main()
{
    long long t,n,i,k;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        k=1;
        for(i=2; i<=n; i++)
            k=k*2+1;
        printf("%lld\n",k);
    }
    return 0;
}
