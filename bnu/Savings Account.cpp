#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        int count=0;
        while(a<c){
            a+=(a*b)/100;
            ++count;
        }
        printf("%d\n",count);
    }
    return 0;
}

