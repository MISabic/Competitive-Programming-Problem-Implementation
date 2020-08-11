#include<bits/stdc++.h>
#define epsilon         0.000000001
#define fequal(a,b)     fabs(a-b)<epsilon
using namespace std;

int main()
{
    double t,x,y,c;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>x>>y>>c;
        double low=0, high=min(x,y), ans;

        while(low<high){
            double mid=(low+high)/2;

            double h1=sqrt((x*x)-(mid*mid));
            double h2=sqrt((y*y)-(mid*mid));
            double h=(h1*h2)/(h1+h2);

            //cout<<low<<" "<<high<<" "<<mid<<" "<<h<<endl;

            if(fequal(h,c)){
                ans=mid;
                break;
            }

            if(h<c){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        printf("Case %d: %.10lf\n",i,ans);
    }
    return 0;
}
