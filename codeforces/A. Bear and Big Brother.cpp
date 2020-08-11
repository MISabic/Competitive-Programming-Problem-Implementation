#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n>>m){
        int c=0;
        while(n<=m){
            n*=3;
            m*=2;
            ++c;
        }
        cout<<c<<endl;
    }
    return 0;
}
