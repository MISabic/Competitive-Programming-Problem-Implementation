#include<stdio.h>

int main()
{
    int n,i,count=0,nar;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        nar=n;
        if(n%2==0)
            count++;

        while(n%2==0)
            n=n/2;

        for(i=3; i*i<=n; i+=2)
        {
            if(n%i==0)
                count++;
            while(n%i==0)
                n=n/i;
        }

        if(n>2)
            count++;

        printf("%d : %d\n",nar,count);
        count=0;
    }
    return 0;
}
