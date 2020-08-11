#include<stdio.h>

int main()
{
    long long int n,i;
    while(scanf("%I64d",&n)==1)
    {
        printf("%I64d\n",(n*(n-1)*(n-2)*(n-3)*(n-4))/120*(n*(n-1)*(n-2)*(n-3)*(n-4)));
    }
    return 0;
}
