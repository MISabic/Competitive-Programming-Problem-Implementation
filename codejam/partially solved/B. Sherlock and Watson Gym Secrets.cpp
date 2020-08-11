#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("B-small-attempt1.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

ll m;

ll mod(long long b,long long p)
{
    long long int ret;
    if(p==0)
        return 1;
    if(p%2==0)
    {
        ret=mod(b,p/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((b%m)*(mod(b,(p-1))))%m;
}

int main()
{
    read;
    //write;
    ll t,a,b,n,k,l,r,c=0;
    cin>>t;
    while(t--){
        ll sum=0;
        cin>>a>>b>>n>>k;


        for(int p=k; p<=n; p+=k){
            for(int i=1; i<=p; i++){
                for(int j=1; j<=p; j++){
                    if(i!=j){
                        m=k;
                        ll m1=(mod(i,a)+mod(j,b))%k;
                        if(m1==0){
                            sum++;
                        }
                    }
                }
            }
        }


        /*for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i!=j){
                    m=k;
                    ll m1=(mod(i,a)+mod(j,b))%k;
                    if(m1==0){
                        sum++;
                    }
                }
            }
        }*/
        printf("Case #%lld: %lld\n",++c,sum);
    }
    return 0;
}

