#include<bits/stdc++.h>
using namespace std;

int main()
{
    double c,v1,v2,v3,a1,a2;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>v1>>v2>>v3>>a1>>a2;
        double d1=.5*v1*v1/a1;
        double d2=.5*v2*v2/a2;
        double d=(d1+d2);

        double bird_d=v3*max(v1/a1,v2/a2);
        printf("Case %d: %.8lf %.8lf\n",i,d,bird_d);
    }
    return 0;
}
