#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

double arr[1000010];

int main()
{
    double c,n,l;
    scanf("%lf",&c);
    for(int i=1; i<=c; i++){
        scanf("%lf %lf",&n,&l);
        double angle=acos(-1)/l;
        double res=(n*sin(angle))/(1+sin(angle));
        printf("Case %d: %.10lf\n",i,res);
    }
    return 0;
}
