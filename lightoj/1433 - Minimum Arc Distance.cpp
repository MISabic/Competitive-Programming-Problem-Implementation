#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,ox,oy,ax,ay,bx,by;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double r=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        double x=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        double theta=2*asin((x/2.0)/r);
        double res=r*theta;

        cout<<fixed;
        cout<<"Case "<<i<<": "<<setprecision(8)<<res<<endl;
    }
}
