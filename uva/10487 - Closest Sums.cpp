#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,q,m,val,c=0,arr[1005];
    vector<long long>sum;
    while(scanf("%lld",&n)==1 && n)
    {
        sum.clear();
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j!=i){
                    k=arr[i]+arr[j];
                    sum.push_back(k);
                }
            }
        }
        sort(sum.begin(),sum.end());
        cin>>q;
        printf("Case %lld:\n",++c);
        for(int i=0; i<q; i++){
            cin>>k;
            m=1e18;
            for(int j=0; j<sum.size(); j++){
                if(abs(sum[j]-k)<m){
                    m=abs(sum[j]-k);
                    val=sum[j];
                }
            }
            printf("Closest sum to %lld is %lld.\n",k,val);
        }
    }
    return 0;
}

