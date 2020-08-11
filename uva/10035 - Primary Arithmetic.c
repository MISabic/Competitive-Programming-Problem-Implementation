#include<stdio.h>

int main()
{
    long long int a,b,n=0,n1,n2,count=0;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        while(1)
        {
            n1=a%10;
            n2=b%10;
            a=a/10;
            b=b/10;
            n=(n+n1+n2)/10;
            if(n!=0)
                count++;
            if(a==0 && b==0)
                break;
        }
        if(count>1)
            printf("%lld carry operations.\n",count);
        else if(count==1)
            printf("%lld carry operation.\n",count);
        else
            printf("No carry operation.\n");
        count=n=0;
    }
    return 0;
}
