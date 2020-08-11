#include<stdio.h>

int main()
{
    int a,b,c,x,y,z,i,m;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        for(i=sqrt(c); i>0; i--)
        {
            z=(a*a)-(2*a*i)+(i*i)-((2*b)/i)-(c-(i*i));
            if(z==0)
                break;
        }
        printf("%d\n",i);
    }
}
