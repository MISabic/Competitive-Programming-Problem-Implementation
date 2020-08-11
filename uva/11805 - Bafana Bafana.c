#include<stdio.h>

int main()
{
    int t,n,k,p,keep,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&k,&p);
        keep=((k+p)%n)+n;
        if(keep==0)
            printf("Case %d: %d\n",++c,n);
        else
            printf("Case %d: %d\n",++c,keep);
    }
    return 0;
}
