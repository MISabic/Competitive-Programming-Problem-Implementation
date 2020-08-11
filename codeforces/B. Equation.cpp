#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    while(cin>>a>>b>>c){
        double x=(b*b-4*a*c);
        if(a==0){
            if(b==0 && c==0) printf("-1\n");
            else if(b==0 && c!=0) printf("0\n");
            else printf("1\n%.8f\n",-c/b);
        }
        else if(x<0){
            printf("0\n");
        }
        else if(x==0){
            printf("1\n%.8f\n",((-1.0)*b)/(2.0*a));
        }
        else{
            double y=sqrt(x);
            double r1=(-b+y)/(2.0*a);
            double r2=(-b-y)/(2.0*a);
            printf("2\n%.8f\n%.8f\n",min(r1,r2),max(r1,r2));
        }
    }
    return 0;
}
