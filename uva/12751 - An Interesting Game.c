#include<stdio.h>

int main()
{
    long int n,a,b,c,count=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        a=(a*(a+1))/2;
        b=((b+c-1)*(b+c))/2;
        c=((c-1)*(c))/2;
        printf("Case %ld: %ld\n",++count,a-(b-c));
        --n;
    }
    return 0;
}
