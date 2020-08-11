#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int n;
    double x,y,res,r;
    pair<double,double> co[105];
    while(scanf("%d %lf",&n,&r)==2){
        for(int i=0; i<n; i++){
            scanf("%lf %lf",&x,&y);
            co[i]=make_pair(x,y);
        }
        if(n==1){
            printf("%.2f\n",2*pi*r);
            continue;
        }
        res=0;
        for(int i=0; i<n-1; i++){
            res+=sqrt(pow((co[i+1].first-co[i].first),2)+pow((co[i+1].second-co[i].second),2));

        }
        res+=sqrt(pow((co[n-1].first-co[0].first),2)+pow((co[n-1].second-co[0].second),2));
        printf("%.2f\n",res+2*pi*r);
    }
    return 0;
}
