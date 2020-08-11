#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n){
        int c=0;
        while(n-50>=0){
            n-=50;
            ++c;
        }
        while(n-5>=0){
            n-=5;
            ++c;
        }
        while(n-1>=0){
            n-=1;
            ++c;
        }
        cout<<c<<endl;
    }
    return 0;
}

