#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i,lpd,count=0;
    while(scanf("%lld",&n)==1)
    {
        n=fabs(n);
        if(n==0)
            break;
        if(n%2==0)
        {
            while(n%2==0)
                n/=2;
            lpd=2;
            ++count;
        }
        for(i=3; i*i<=n; i+=2)
        {
            if(n%i==0)
                ++count;
            while(n%i==0)
            {
                lpd=i;
                n=n/i;
            }
        }
        if(n>2)
        {
            lpd=n;
            ++count;
        }
        if(count>1)
            printf("%lld\n",lpd);
        else
            printf("-1\n");
        count=lpd=0;
    }
    return 0;
}
