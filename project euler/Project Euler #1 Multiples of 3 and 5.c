#include<stdio.h>

int main()
{
    long long int t,n,a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a=(n-1)/3;
        a=3*((a*(a+1))/2);
        b=(n-1)/5;
        b=5*((b*(b+1))/2);
        c=(n-1)/15;
        c=15*((c*(c+1))/2);
        printf("%lld\n",a+b-c);
    }
    return 0;
}
