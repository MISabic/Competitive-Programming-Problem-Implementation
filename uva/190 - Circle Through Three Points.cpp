#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int flag=0;
    double x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){

        double d=(x1-x2)*(y2-y3)-(x2-x3)*(y1-y2);
        double u=(x1*x1-x2*x2+y1*y1-y2*y2)/2;
        double v=(x2*x2-x3*x3+y2*y2-y3*y3)/2;
        double x=(u*(y2-y3)-v*(y1-y2))/d;
        double y=(v*(x1-x2)-u*(x2-x3))/d;
        double radius=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));

        if(x>=0) printf("(x - %.3f)^2 + (y ",x);
        else printf("(x + %.3f)^2 + (y ",abs(x));
        if(y>=0) printf("- %.3f)^2 = ",y);
        else printf("+ %.3f)^2 = ",abs(y));
        printf("%.3f^2\n",radius);

        if(x*2>=0) printf("x^2 + y^2 - %.3fx",x*2);
        else printf("x^2 + y^2 + %.3fx",abs(x*2));
        if(y*2>=0) printf(" - %.3fy",y*2);
        else printf(" + %.3fy",abs(y*2));
        double c=x*x+y*y-radius*radius;
        if(c>=0) printf(" + %.3f = 0\n\n",c);
        else printf(" - %.3f = 0\n\n",abs(c));
    }
    return 0;
}
