#include<bits/stdc++.h>
#define eps 0.000000001
#define fequal(a,b) fabs(a-b)<eps

using namespace std;

int main()
{
    int c,ra,rb;
    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        scanf("%d : %d",&ra,&rb);
        double low=0,high=400,mid,ans;
        while(low<high){
            double mid=(low+high)/2;
            double a=ra*mid;
            double b=rb*mid;

            double r=sqrt(a*a+b*b)/2;
            double theta=acos((2*r*r-b*b)/(2*r*r));
            double s=r*theta;

            double p=2*a+2*s;

    //cout<<low<<" "<<high<<" "<<mid<<" "<<p<<" "<<a<<" "<<b<<endl;

            if(fequal(p,400)){
                printf("Case %d: %.10lf %.10lf\n",i,a,b);
                break;
            }

            if(p<400){
                low=mid;
            }
            else{
                high=mid;
            }
        }
    }
    return 0;
}
