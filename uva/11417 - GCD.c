#include<stdio.h>

long int gcd(long int i, long int j)
{
    long int temp,rem,div;
    if(i<j)
    {
        temp=i;
        i=j;
        j=temp;
    }
    while(j!=0)
    {
        rem=i%j;
        i=j;
        j=rem;
    }
    return i;
}

int main()
{
    long int n,i,j,g=0;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        {
            g+=gcd(i,j);
        }
        printf("%ld\n",g);
        g=0;
    }
    return 0;
}
