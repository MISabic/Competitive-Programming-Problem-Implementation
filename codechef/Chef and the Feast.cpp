#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k,arr[100010];
    scanf("%lld",&t);
    while(t--){
        long long sum=0,total=0,ptot=0,mtot=0,cnt=0,mx=-1000000000LL,msum,ans=0;
        vector<long long>p,m;
        scanf("%lld",&n);
        for(int i=0; i<n; i++){
            scanf("%lld",&k);

            total+=k;
            mx=max(mx,k);

            if(k>=0){
                p.push_back(k);
                ptot+=k;
            }
            else{
                m.push_back(k);
                mtot+=k;
            }
        }
        if(mx<=0){
            printf("%lld\n",total);
        }
        else{
            ans=ptot,cnt=p.size(),msum=0,mx=ans*cnt;
            sort(m.begin(),m.end(),greater<long long>());
            //cout<<mx<<endl;
            for(int i=0; i<m.size(); i++){
                if(((m[i]+ans)*(cnt+1))>=(mx)){ //cout<<m[i]<<" :: here :: "<< ((m[i]+ans)*(cnt+1)) <<endl;

                    ans+=m[i];
                    ++cnt;
                    mx=(ans*cnt);
                }
                else{
                    msum+=m[i];
                }
            }
            ans=(ans*cnt)+msum;
            printf("%lld\n",ans);
        }
    }
    return 0;
}
