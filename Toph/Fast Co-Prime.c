#include<stdio.h>

long long phi(long long n)
{
    double res=n;
    long long i;
    if(n%2==0){
        while(n%2==0)
            n/=2;
        res*=(1-1/2.0);
    }
    for(i=3; i*i<=n; i+=2){
        if(n%i==0){
            while(n%i==0)
                n/=i;
            res*=(1-1/(double)i);
        }
    }
    if(n>2)
        res*=(1-1/(double)n);
    return (long long)res;
}

int main()
{
    long long t,a,b;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",phi(a)*(b-1));
    }
    return 0;
}
