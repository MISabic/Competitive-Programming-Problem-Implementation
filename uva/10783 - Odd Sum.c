#include<stdio.h>

int main()
{
    long int t,a,b,i,total=0,m=0;
    scanf("%ld",&t);
    while(t!=0)
    {
        scanf("%ld %ld",&a,&b);
        for(i=a; i<=b; i++)
            if(i%2!=0)
                total+=i;
        printf("Case %ld: %ld\n",++m,total);
        total=0;
        --t;
    }
    return 0;
}
