#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double l,w,r,cir,rec;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%lf",&l);
        cir=acos(-1)*pow((l/5),2);
        w=(l/10)*6;
        rec=(l*w)-cir;
        printf("%.2f %.2f\n",cir,rec);
        --n;
    }
    return 0;
}
