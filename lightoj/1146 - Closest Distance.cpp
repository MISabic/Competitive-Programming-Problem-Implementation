#include<bits/stdc++.h>
#define eps 0.0000000001
#define f(a,b) fabs(a-b)>eps
using namespace std;

double distance(pair<double,double> a, pair<double,double> b)
{
    return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
}

int main()
{
    //freopen("out.txt","w",stdout);
    double t,ax,ay,bx,by,cx,cy,dx,dy;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
        pair<double,double>low1(ax,ay),high1(bx,by),low2(cx,cy),high2(dx,dy),mid1,mid2,mid3,mid4;
        double ans=0;

        while(f(low1.first,high1.first) || f(low1.second,high1.second) || f(low2.first,high2.first) || f(low2.second,high2.second)){

            double factor1=(high1.first-low1.first);
            double factor2=(high1.second-low1.second);

            mid1={low1.first+factor1/3,low1.second+factor2/3};
            mid2={high1.first-factor1/3,high1.second-factor2/3};

            double factor3=(low2.first-high2.first);
            double factor4=(low2.second-high2.second);

            mid3={low2.first-factor3/3,low2.second-factor4/3};
            mid4={high2.first+factor3/3,high2.second+factor4/3};

            double minDist1=distance(mid1,mid3);
            double minDist2=distance(mid2,mid4);
            //cout<<minDist1<<" "<<minDist2<<endl;
//cout<<low1.first<<" "<<low1.second<<" "<<high1.first<<" "<<high1.second<<" "<<mid1.first<<" "<<mid1.second<<" "<<mid2.first<<" "<<mid2.second<<" "<<mid3.first<<" "<<mid3.second<<" "<<mid4.first<<" "<<mid4.second<<endl;
//cout<<low1.first<<" "<<low1.second<<" "<<high1.first<<" "<<high1.second<<" "<<minDist1<<" "<<minDist2<<endl;

            if(minDist1<minDist2){
                high1=mid2;
                high2=mid4;
                ans=minDist1;
            }
            else if(minDist1>minDist2){
                low1=mid1;
                low2=mid3;
                ans=minDist2;
            }
            else{
                low1=mid1;
                high1=mid2;

                high2=mid4;
                low2=mid3;

                ans=minDist2;
            }
            //cout<<low2.first<<" "<<low2.second<<" "<<high2.first<<" "<<high2.second<<endl;
        }
        cout<<"Case "<<i<<": "<<setprecision(6)<<fixed<<ans<<endl;
        //printf("Case %d: %.6lf\n",i,ans);
    }
    return 0;
}
