#include<stdio.h>

int main()
{
    long long n;
    while(scanf("%I64d",&n)==1)
        (n%2==0) ? printf("%I64d\n",n/2) : printf("-%I64d\n",n/2+1);
    return 0;
}
