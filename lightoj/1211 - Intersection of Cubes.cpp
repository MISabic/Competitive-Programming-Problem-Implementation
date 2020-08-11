#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,rx1,ry1,rz1,rx2,ry2,rz2,x1,y1,z1,x2,y2,z2;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        rx1=ry1=rz1=0;
        rx2=ry2=rz2=1005;
        for(int j=0; j<n; j++){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            rx1=min(rx2, max(rx1, x1));
            ry1=min(ry2, max(ry1, y1));
            rz1=min(rz2, max(rz1, z1));
            rx2=max(rx1, min(rx2, x2));
            ry2=max(ry1, min(ry2, y2));
            rz2=max(rz1, min(rz2, z2));
        }
        cout<<"Case "<<i<<": "<<abs(rx1-rx2)*abs(ry1-ry2)*abs(rz1-rz2)<<endl;
    }
    return 0;
}
