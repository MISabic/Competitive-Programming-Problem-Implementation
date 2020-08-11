#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    double r,d,n,x,y,k;
    while(cin>>r>>d){
        cin>>n;
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>x>>y>>k;
            double f=sqrt(x*x+y*y)-(double)k;
            double s=sqrt(x*x+y*y)+(double)k;
            double keep=r-d;
            if(f>=keep && s<=r) ++cnt;
        }
        cout<<cnt<<endl;
    }
}

