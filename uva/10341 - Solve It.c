#include<stdio.h>
#include<math.h>

float epsilon = 0.000000001;

int fequal(double a, double b)
{
    return fabs(a-b) < epsilon;
}

int main()
{
    double p,q,r,s,t,u,start,end,mid,k;
    while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u)==6)
    {
        start=0,end=1;
        while(end>start)
        {
            mid=(start+end)/2;
            k=(p*exp(-mid) + q*sin(mid) + r*cos(mid) + s*tan(mid) + t * pow(mid,2) +u);
            if(fequal(k,0))
                break;
            if(k<0)
                end=mid;
            else
                start=mid;
        }
        if(fequal(k,0))
            printf("%.4f\n",mid);
        else
            printf("No solution\n");
    }
    return 0;
}
