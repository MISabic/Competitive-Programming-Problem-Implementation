#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define grep(i,n) for(int i=1; i<=n; i++)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define pi acos(-1)
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define si second
using namespace std;

int main()
{
    //read;
    ll n,k;
    while(scanf("%I64d %I64d",&n,&k)==2){
        ll c=0,f=0;
        while(n%k){
            n+=n%k;
            ++c;
            if(c>10000000){
                f=1;
                break;
            }
        }
        if(f==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}







