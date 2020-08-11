#include<stdio.h>

long long int gcd(long long int a, long long int b)
{
    long long int temp;
    while(b)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int main()
{
    long long int n,i,a,c,k,m;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&a,&c);
        k=c/a;
        if(c<a || c%a!=0)
        {
            printf("NO SOLUTION\n");
            continue;
        }
        for(i=k; i<=c; i+=k)
        {
            m=i/gcd(i,a);
            if(m==k)
                break;
        }
        printf("%lld\n",i);
    }
    return 0;
}
