#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100100];

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    while(scanf("%lld %lld",&n,&k)==2){
        ll mx=0;
        for(int i=0; i<n; i++) scanf("%lld",&arr[i]),mx=max(mx,arr[i]);
        ll low=1,high=mx,cnt=0,res=0;
        while(low<=high){
            ll mid=(low+high)/2;    //cout<<low<<"  mid :: "<<high<<endl;
            for(int i=0; i<n; i++){
                if(arr[i]==1) continue;
                cnt+=(arr[i]/mid);
            }
            if(cnt<k){
                high=mid-1;
                cnt=0;
            }
            else if(cnt>=k){
                low=mid+1;
                res=mid;
                cnt=0;
            }
        }
        printf("%lld\n",res);
    }
    return 0;
}

