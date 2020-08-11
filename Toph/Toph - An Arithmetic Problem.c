#include<stdio.h>

int main()
{
    int t,x,y,z,n,i,pick1,pick2,res,count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&x,&y,&z,&n);
        pick1=y-x;
        pick2=z-y;
        if(pick1==pick2)
        {
            res=x+(n-1)*pick1;
            printf("Case %d: %d\n",++count,res);
        }
        else
            printf("Case %d: Error\n",++count);
    }
    return 0;
}
