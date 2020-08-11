/** they work together so
 *  first multiply "y" part
 *  then multiply (x-y)*2 to z...
 *  "have to use double"
 */
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double x,y,z,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        a=z/(x+y);
        b=floor(a*y+2*(x-y)*a + 1e-8);//le-8 imp...
        if(b>0)
            printf("%.0f\n",b);
        else
            printf("0\n");
    }
    return 0;
}
