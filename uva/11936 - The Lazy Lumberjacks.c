#include<stdio.h>

int main()
{
    long long int i,j,k,n;
    scanf("%lld",&n);
    while(n!=0)
    {
        scanf("%lld %lld %lld",&i,&j,&k);
        if(i==j && j==k && k==i || i+j>k && j+k>i && k+i>j)
                printf("OK\n");
        else
            printf("Wrong!!\n");
        --n;
    }
    return 0;
}

