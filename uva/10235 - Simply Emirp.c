#include<stdio.h>

long int isPrime(long int n)
{
    long int i;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

long int isEmirp(long int num)
{
    long int n,rem,rev=0;
    n=num;
    while(n!=0)
    {
        rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    if(rev==num)
        return 0;
    if(isPrime(rev)==1)
        return 1;
    else
        return 0;
}
int main()
{
    long int t,n,i,j;
    while(scanf("%ld",&n)==1)
    {
        if(n>-2 && n< 1000000)
        {
        if(isPrime(n)==1 && isEmirp(n)==1 || n==-1)
            printf("%ld is emirp.\n",n);
        else if(isPrime(n)==1 && isEmirp(n)==0)
            printf("%ld is prime.\n",n);
        else
            printf("%ld is not prime.\n",n);
        }
        else
            printf("%ld is not prime.\n",n);
    }
    return 0;
}
