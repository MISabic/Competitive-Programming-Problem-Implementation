#include<stdio.h>

long long int m;

int mod(long long b,long long p)
{
    long long int ret;
    if(p==0)
        return 1;
    if(p%2==0)
    {
        ret=mod(b,p/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((b%m)*(mod(b,(p-1))))%m;
}

int main()
{
    long long int b,p;
    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
    {
        printf("%d\n",mod(b,p));
    }
    return 0;
}

/*
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long long int bigmod ( long long a, int p, int m );

int main(){
    printf("input format...\n (a^p) MOD m\n");
    long long a;
    int p,m;
    printf("enter a : ");
    scanf("%lld",&a);
    printf("\n");
    printf("enter p : ");
    scanf("%d",&p);
    printf("\n");
    printf("enter m : ");
    scanf("%d",&m);
    printf("\n");



    //Calling...
    printf("result is %d\n",bigmod(a,p,m));

    int hold;
    scanf("%lld",&hold);
   return 0;
}



//BIG MODE CODE...
long long int  bigmod ( long long a, int p, int m )
{
    if ( p == 0 )return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else //If power is even then split it equally and return the result...
    {
        long long c = bigmod ( a, p / 2, m );
        printf("\t%lld\n",c);
        return ( (c%m) * (c%m) ) % m;
    }
}
*/
