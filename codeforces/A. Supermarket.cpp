#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int arr[2020][2020];

int main()
{
    ll t,n,m,p,q,r,s,c;
    string str,ip;
    double a,b;
    map<string,string>mp;
    ll res=1;
    /*vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    while(cin>>n>>m){
        ll tot=0,ok=0;
        double mn=1000000000;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            double k=a/b;
            double res=(k*m);
            //cout<<res<<endl;
            mn=min(res,mn);
        }
        printf("%.8f\n",mn);
    }
    return 0;
}

