#include<stdio.h>
#include<math.h>
#define pi 3.14159265

int main()
{
    double d1,v1,d2,v2,x;
    while(scanf("%lf %lf",&d1,&v1)==2)
    {
        if(d1==0 && v1==0)
            break;
        x=1/3;
        v2=(pi*(d1/2)*(d1/2)*d1)-v1-(v1/2);
        v2=pow(((v2/pi)*4),x);
        printf("%.3f\n",v2);
    }
    return 0;
}
