#include<stdio.h>
#include<math.h>

int main()
{
    double t,a,b,c,r;
    int count=0;
    scanf("%lf",&t);
    while(t--){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&r);
        printf("Case %d: %.9lf\n",++count,sqrt((r/(r+1))*a*a));
    }
    return 0;
}
