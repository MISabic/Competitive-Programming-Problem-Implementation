#include<stdio.h>

int main()
{
    long long int n,rem=0;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        while(n>=10)
        {
            while(n!=0)
            {
                rem+=(n%10);
                n=n/10;
            }
            n=rem;
            rem=0;
        }
        printf("%lld\n",n);
    }
    return 0;
}
