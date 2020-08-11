#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        double c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double radius=(a*b*c)/(4*area);
        double circumference=2*pi*radius;
        printf("%.2f\n",circumference);
    }
    return 0;
}
