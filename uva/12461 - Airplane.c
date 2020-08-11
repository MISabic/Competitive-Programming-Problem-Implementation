#include<stdio.h>

int main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        printf("1/2\n");
    }
    return 0;
}
