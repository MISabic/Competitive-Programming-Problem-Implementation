#include<stdio.h>

int main()
{
    unsigned long long n,num5,num6,num7,k,arr[780];
    for(n=7; n<=777; n++)
    {
        k=(n*(n-1)*(n-2)*(n-3)*(n-4));
        num5=k/120;
        num6=(k*(n-5))/720;
        num7=n*(n-1)/2*(n-2)/3*(n-3)/4*(n-4)/5*(n-5)/6*(n-6)/7;
        arr[n]=num5+num6+num7;
    }
    while(scanf("%I64d",&n)==1)
    {
        printf("%I64d\n",arr[n]);
    }
    return 0;
}
