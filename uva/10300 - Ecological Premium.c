#include<stdio.h>

int main()
{
    long int t,n,a,b,c,total=0,m;
    scanf("%ld",&t);
    while(t!=0)
    {
        scanf("%ld",&n);
        while(n!=0)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            m=a*c;
            total+=m;
            --n;
        }
        printf("%ld\n",total);
        total=0;
        --t;
    }
    return 0;
}
