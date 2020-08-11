#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n>>m>>k>>p){
        ll q1=max(n,m);
        ll q2=min(k,p);
        if(q1<=q2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

