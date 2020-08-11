#include<stdio.h>

int count=0;

void calc(long long int a,long long int b,long long int c)
{
    if(a*a==(b*b+c*c))
        printf("Case %d: yes\n",++count);
    else
        printf("Case %d: no\n",++count);
}

int main()
{
    long long int t,a,b,c,keep;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>b && a>c)
            calc(a,b,c);
        else if(b>a && b>c)
            calc(b,c,a);
        else
            calc(c,b,a);
    }
    return 0;
}
