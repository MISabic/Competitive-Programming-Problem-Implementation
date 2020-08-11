#include<stdio.h>

int main()
{
    long long int a,b,i,j,count=0,s;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        for(i=1; i*i<=b; i++)
        {
            if(i*i>=a && i*i<=b)
                count++;
        }

        printf("%lld\n",count);
        count=0;
    }
    return 0;
}
