#include<stdio.h>

int phi(int n) {
    int i,result = n;
    for(i = 2; i * i <= n; ++i)
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    if(n > 1)
        result -= result / n;
    return result;
}

long long int gcd(long long int i, long long j)
{
    long long int temp,rem,div;
    if(i<j)
    {
        temp=j;
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
    long long int n,i,j,count=0;
    while(scanf("%lld",&n)==1)
    {
        /*for(i=n; i>=0; i--)
        {
            for(j=0; j<=i; j++)
            {
                if(gcd(i,j)==1)
                {
                    count++;
                    if(count==n)
                    {
                        printf("%lld/%lld\n",j,i);
                        break;
                    }
                }
            }
            if(count==n)
                break;
        }
        count=0;*/
        printf("%d\n",phi(n));
    }
    return 0;
}
