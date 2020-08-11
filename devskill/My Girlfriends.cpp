#include<bits/stdc++.h>
using namespace std;

pair<long long,long long>pi[1000010];

int main()
{
    long long t,n,d,m,l,c=0;
    cin>>t;
    while(t--){
        cin>>n>>d>>m>>l;
        for(int i=1; i<=n; i++){
            pi[i].first=(i-1)*m;
            pi[i].second=(i-1)*m+l;
        }
        int f=0;
        for(long long i=1; i<n; i++){
            for(long long j=pi[i].second+1; j<pi[i+1].first; j++){
                if(j%d==0){
                    printf("Case %lld: %lld\n",++c,j);
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        if(f==0){
            for(long long i=pi[n].second+1; ; i++)
                if(i%d==0){
                    printf("Case %lld: %lld\n",++c,i);
                    break;
                }
        }
    }
    return 0;
}
