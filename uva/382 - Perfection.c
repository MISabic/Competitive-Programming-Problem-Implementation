#include<stdio.h>

long int perfect(long int n)
{
    long int i,count=0;
    {
        for(i=1; i<n; i++)
            if(n%i==0)
                count+=i;
    }
    return count;
}

int main()
{
    long int p,n,i,count=0,flag=0;
    while(scanf("%ld",&n)==1)
    {
        if(flag==0)
        {
            printf("PERFECTION OUTPUT\n");
            flag=1;
        }
        if(n==0)
        {
            printf("END OF OUTPUT");
            break;
        }
        p=perfect(n);
        if(n==p)
            printf("%5ld  PERFECT\n",n);
        else if(n<p)
            printf("%5ld  ABUNDANT\n",n);
        else if(n>p)
            printf("%5ld  DEFICIENT\n",n);
    }
    printf("\n");
    return 0;
}
