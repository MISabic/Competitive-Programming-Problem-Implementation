#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,r1,r2,h,p;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>r1>>r2>>h>>p;
        double x=(double)h*r2/(double)(r1-r2);
        double r=(double)r1*(p+x)/(double)(h+x);

        double res1=(1/3.0)*acos(-1)*r*r*(p+x)*1.0;
        double res2=(1/3.0)*acos(-1)*r2*r2*x*1.0;

        printf("Case %d: %lf\n",i,res1-res2);
    }
    return 0;
}
