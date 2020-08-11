#include<stdio.h>

int main()
{
    int i,j=0,n,num=0,count=0;
    while(j<2000)
    {
        scanf("%d",&n);
        if(n>0 && n<10001)
        {
            for(i=2; i<=n; i*=2)
                ++count;
            if(i/2<n)
                ++count;
        }
        else
            return 0;
        printf("Case %d: %d\n",++num,count);
        count=0;
    }
    return 0;
}
