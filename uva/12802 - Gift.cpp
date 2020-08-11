/*#include<stdio.h>

long palin(long num)
{
    long int rem=0,rev=0,n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==n)
        return 1;
    else
        return 0;
}

long prime(long num)
{
    int i;
    if(num==2)
        return 1;
    if(num%2==0)
        return 0;
    for(i=3; i*i<=num; i+=2)
        if(num%i==0)
            return 0;
    return palin(num);
}

int main()
{
    long int i;
    while(scanf("%ld",&i))
    {
        printf("%ld",i*2);
        if(prime(i)==0)
            printf("\n");
        if(prime(i)==1)
            break;
    }
    return 0;
}*/
#include<stdio.h>
#define MAX 1000001

int prime(long num)
{
    int i;
    if(num==2)
        return 1;
    if(num%2==0)
        return 0;
    for(i=3; i*i<=num; i+=2)
        if(num%i==0)
            return 0;
    return 1;
}
int rev (long n)
{
    int revv = 0;
    while(n!=0)
    {
        revv = revv * 10;
        revv = revv + n%10;
        n = n/10;
    }
    return revv;
}

int main()
{
    long int n;
    while(1)
    {
        scanf("%ld",&n);
        printf("%ld\n",2*n);

        if(rev(n)==n)
        {
            if(prime(rev(n)))
                break;
        }
    }
}
