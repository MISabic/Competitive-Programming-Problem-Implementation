#include<stdio.h>

int main()
{
    long long int a,b,c,d,temp,rem,div,x,y;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        c=a;
        d=b;
        while(1)
        {
            div=a/b;
            rem=a%b;
            printf("%lld=%lld*%lld+%lld\n",a,b,div,rem);
            a=b;
            b=rem;
            if(rem==0)
                break;
        }
        //x=
        //x=(a-d*y)/c;
        //printf("%lld\n",(a-d*y)/c);
        printf("%lld %lld %lld\n",x,y,a);
    }
}
