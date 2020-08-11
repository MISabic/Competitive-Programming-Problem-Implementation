#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    double r;
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&r);
        printf("Case %d: %.2f\n",++c,(r*r*4)-(acos(-1)*r*r));
    }
    return 0;
}
