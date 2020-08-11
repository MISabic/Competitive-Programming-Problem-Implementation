#include<stdio.h>

int main()
{
    long int n,fer,cel,count=0;
    double tem;
    scanf("%ld",&n);
    while(n!=0)
    {
        scanf("%ld %ld",&cel,&fer);
        tem=cel+fer*0.555555556;
        printf("Case %ld: %.2lf\n",++count,tem);
        --n;
    }
    return 0;
}
