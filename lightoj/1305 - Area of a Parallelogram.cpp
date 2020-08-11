#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,ax,ay,bx,by,cx,cy;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        int dx=ax+cx-bx;
        int dy=ay+cy-by;

        int area=0.5*abs((ax*by)+(bx*cy)+(cx*dy)+(dx*ay)-(ay*bx)-(by*cx)-(cy*dx)-(dy*ax));
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }
    return 0;
}
