#include<stdio.h>

long long int c(long long int k)
{
    if(k==0)
        return 0;
    if(k==1)
        return 5;
    return c(k-1)+4;
}

long long int f(long long int k)
{
    if(k==0)
        return 1;
    if(k==1)
        return 2;
    return f(k-1)+c(k-1);
}

int main()
{
    printf("%lld\n",f(1));
    printf("%lld\n",f(2));
    printf("%lld\n",f(3));
    printf("%lld\n",f(4));
    printf("%lld\n",f(5));
    printf("%lld\n",f(6));
    printf("%lld\n",f(7));
    printf("%lld\n",f(8));
    printf("%lld\n",f(9));
    printf("%lld\n",f(10));
}
