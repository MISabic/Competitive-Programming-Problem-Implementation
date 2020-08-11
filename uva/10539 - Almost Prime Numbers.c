#include <stdio.h>
#include <math.h>
#include <stdlib.h>
static char* primes;

void cachePrimes(int n)
{
    int i,j,k;
    primes = (char*) malloc((n+1)*sizeof(char));
    for(i = 0;i<=n;i++)
        primes[i] = 0;
    primes[0]=1;
    primes[1] = 1;
    k = sqrt(n);
    for(i = 2;i<=k;i++)
        if(!primes[i])
            for(j=i*i;j<=n;j+=i)
                primes[j] = 1;
}
int main()
{
    cachePrimes(1000000);
    int c ;
    register long long int i;
    register long long int j;
    long long int almost[80070];
    long long int n,m;
    int top = 0;
    int count = 0;
    for(i=2;i<=1000000;i++)
        if(!primes[i])
            for(j=i*i;j<=1000000000000;j*=i)
                almost[top++] = j;
    scanf("%d",&c);
    while(c>0)
    {
        scanf("%lld %lld",&n,&m);
        count = 0;
        for(i=0;i<80070;i++)
            if(almost[i]>=n&&almost[i]<=m)
                count++;
        printf("%d\n",count);
        c--;
    }
    return 0;
}


/*
#include<stdio.h>
#include<math.h>

long long int a,b;

long long int prime(long long int n)
{
    int i;
    if(n==2)
        return 1;
    if(n%2==0 || n==1)
        return 0;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

long long int div(long long int n)
{
    long long int i,count=0;
    if(n%2==0)
        count++;
    while(n%2==0)
        n/=2;
    for(i=3; i*i<=b; i+=2)
    {
        if(n%i==0)
            count++;
        while(n%i==0)
            n/=i;
    }
    if(n>2)
        count++;
    return count;
}

int main()
{
    long long int n,num,i,count=0,j;
    double guy;
    scanf("%lld",&n);
    while(n!=0)
    {
        scanf("%lld %lld",&a,&b);
        num=floor(sqrt(b));
        //printf("%lld\n",num);
        for(i=2; i<=num; i++)
        {
            /*if(prime(i)==0 && div(i)==1)
            {
                //printf("%lld %lld\n",i,div(i));
                //printf("%lld\n",div(i));
                count++;
            }*/
            /*if(prime(i)==1)
            {
                for(j=2; j<=num; j++)
                {
                    guy=pow(i,j);
                    //printf("%lld %lld %lld\n",i,j,(long long int)guy);
                    if(guy<=b)
                    {
                        if(guy>=a)
                            count++;
                    }
                    else
                        break;
                }
            }
        }
        printf("%lld\n",count);
        count=0;
        --n;
    }
    return 0;
}
*/
