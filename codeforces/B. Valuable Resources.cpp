#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define grep(i,n) for(int i=1; i<=n; i++)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define pi acos(-1)
#define pii pair<long long,long long>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define si second
using namespace std;

int main()
{
    //read;
    ll n;
    while(scanf("%I64d",&n)==1){
        pii arr[n+1],brr[n+1];
        rep(i,n){
            scanf("%I64d %I64d",&arr[i].fi,&arr[i].si);
            brr[i].fi=arr[i].si, brr[i].si=arr[i].fi;
        }
        sort(arr,arr+n);
        sort(brr,brr+n);
        ll res,res2;
        res=(arr[0].fi-arr[n-1].fi)*(arr[0].fi-arr[n-1].fi);
        res2=(brr[0].fi-brr[n-1].fi)*(brr[0].fi-brr[n-1].fi);
        cout<< max(res,res2) <<endl;
    }
    return 0;
}







