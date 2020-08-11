#include<stdio.h>

long palin(long num)
{
    long int rem=0,rev=0,n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
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
    return 1;
}

int main()
{
    long int i;
    while(scanf("%ld",&i))
    {
        printf("%ld\n",i*2);
        if(prime(i)==1 && palin(i)==i)
            break;
    }
    return 0;
}
