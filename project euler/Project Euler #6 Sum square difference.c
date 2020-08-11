#include<stdio.h>
int main()
{
    long long t,n,p;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        p=n*(n+1);
        printf("%lld\n",(p*p)/4-(p*(2*n+1))/6);
    }
    return 0;
}
