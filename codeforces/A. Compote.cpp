#include<bits/stdc++.h>
#define ll long long
#define mp meke_pair
#define pb push_back
#define fi first
#define si second
#define len str.length()
#define bug cout<<"  helllo  "<<endl

using namespace std;

int main()
{
    ll t,n,p,q,r,s,k,arr[100100];
    double x1,y1,x2,y2;
    string str;
    while(cin>>n>>p>>q){
        p/=2;
        q/=4;
        k=min(n,min(p,q));
        cout<<k+2*k+4*k<<endl;
    }
    return 0;
}
