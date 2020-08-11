#include<stdio.h>

int main()
{
    long long int i,j,res1;
    int n;
    scanf("%d",&n);
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i>=j && (i+j)%2==0)
        /**
        * i=sum of two num & j=sub of two num
        * (i+j) is an even number & is divisible by 2
        */
        {
            res1=(i+j)/2;
            /**
            * res1=((a+b)+(a-b))/2
            * res1=2a/2
            * res1=a
            */
            printf("%lld %lld\n",res1,i-res1);
        }
        else
            printf("impossible\n");
        --n;
        if(n==0)
            break;
    }
    return 0;
}
