#include<bits/stdc++.h>
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
        cin>>l>>r;
        if((r-l)<=6 && (r-l)>=1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
