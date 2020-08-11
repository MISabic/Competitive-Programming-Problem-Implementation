#include<stdio.h>

int main()
{
    long long int n;
    while(scanf("%I64d",&n)==1)
    {
        if(n%2==0)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
