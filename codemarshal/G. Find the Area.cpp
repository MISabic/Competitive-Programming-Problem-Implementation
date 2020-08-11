#include<bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    ll n,l,r,c=0;
    cin>>n;
    while(n--){
        cin>>l;
        printf("%.2f\n",(l*l)-(pi*(l/2.0)*(l/2.0)));
    }
    return 0;
}

