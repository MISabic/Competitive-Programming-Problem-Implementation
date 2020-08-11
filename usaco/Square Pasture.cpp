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
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    ll t,n,a,b,p,q,r,s,k,d,x[10],y[10];
    string str;
    for(int i=0; i<4; i++)
        cin>>x[i]>>y[i];
    sort(x,x+4);
    sort(y,y+4);
    int x1=x[0],y1=y[0],x2=x[3],y2=y[3];
    int mn=max(abs(x1-x2),abs(y1-y2));
    cout<<mn*mn<<endl;
    return 0;
}
