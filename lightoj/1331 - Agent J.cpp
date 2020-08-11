#include<bits/stdc++.h>
using namespace std;

int main()
{
    double c,r1,r2,r3;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>r1>>r2>>r3;

        double a=r1+r2;
        double b=r1+r3;
        double c=r2+r3;

        double theta1=acos((a*a+b*b-c*c)/(2*a*b));
        double area1=.5*r1*r1*theta1;
        double theta2=acos((a*a+c*c-b*b)/(2*a*c));
        double area2=.5*r2*r2*theta2;
        double theta3=acos((b*b+c*c-a*a)/(2*b*c));
        double area3=.5*r3*r3*theta3;

        double s=(2*r1+2*r2+2*r3)/2;
        double triangleArea=sqrt(s*(s-r1-r2)*(s-r2-r3)*(s-r3-r1));

        double area=triangleArea-area1-area2-area3;

        printf("Case %d: %.10lf\n",i,area);
    }
    return 0;
}
