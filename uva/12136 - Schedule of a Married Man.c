#include<stdio.h>

int main()
{
    int n,a,b,c,d,e,f,g,h,count=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        a=a*60+b;
        c=c*60+d;
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        e=e*60+f;
        g=g*60+h;
        if(e<a && g<a || e>c && g>c)
            printf("Case %d: Hits Meeting\n",++count);
        else
            printf("Case %d: Mrs Meeting\n",++count);
    }
    return 0;
}
