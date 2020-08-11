#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double l,d,h,v,t,s;
    cin>>n;
    while(n--){
        scanf("%lf %lf %lf %lf",&l,&d,&h,&v);
        l=l/1000.0;
        d=d/1000.0;
        h=h/1000.0;
        v=v/1000.0;
        t=sqrt(2*h/9.81);
        s=v*t;
        if(s<(d-.5) || s>(d+l+.5))
            cout<<"FLOOR"<<endl;
        else if(s>(d+.5) && s<(d+l-.5))
            cout<<"POOL"<<endl;
        else
            cout<<"EDGE"<<endl;
    }
    return 0;
}
