#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    double l,w,h,theta;
    while(cin>>l>>w>>h>>theta){
        if((l*tan(theta*pi/180.0))<=h){
            double volume=l*w*h;
            double part=(.5*l*l*tan(theta*pi/180.0))*w;
            double res=volume-part;
            printf("%.3f mL\n",res);
        }
        else{
            double part=(.5*h*h*tan((90-theta)*pi/180.0))*w;
            printf("%.3f mL\n",part);
        }
    }
    return 0;
}
