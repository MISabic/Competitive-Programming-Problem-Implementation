#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    double a,b,c;
    while(cin>>a>>b>>c){
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double radius=area/s;
        if(s==0)
            printf("The radius of the round table is: 0.000\n");
        else
            printf("The radius of the round table is: %.3f\n",radius);
    }
    return 0;
}

