#include<stdio.h>
#define max(a,b) (a>b)?a:b

int main()
{
    long long int t,a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(b%a!=0)
            printf("-1\n");
        else
            printf("%lld %lld\n",a,b);
    }
    return 0;
}
