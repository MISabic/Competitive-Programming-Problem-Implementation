#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int t,c=0,r,h;
    cin>>t;
    while(t--){
        cin>>r>>h;
        double val=(pi*r)/(h*2);
        printf("Case %d: %.8f\n",++c,val);
    }
    return 0;
}
