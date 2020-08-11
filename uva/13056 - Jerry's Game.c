#include<stdio.h>
#define pi acos(-1)

int main()
{
    double r,v;
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf",&r,&v);
        printf("Case %d: %.8f\n",++c,(pi*r)/(v*2));
    }
    return 0;
}
