#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    long long int n,i,lpd,count=0;
    while(scanf("%lld",&n)==1)
    {
        n=fabs(n);
        if(n==1)
            break;
        if(n%2==0)
        {
            while(n%2==0){
                n/=2;
                ++count;
            }
        }
        for(i=3; i*i<=n; i+=2)
        {
            while(n%i==0)
            {
                lpd=i;
                n=n/i;
                ++count;
            }
        }
        if(n>2)
        {
            lpd=n;
            ++count;
        }
        if(count>1)
            printf("%lld\n",count);
        else
            printf("1\n");
        count=lpd=0;
    }
    return 0;
}
