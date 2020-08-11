#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,p,arr[100100];
    while(scanf("%I64d",&n)==1){
        for(int i=0; i<n; i++)
            scanf("%I64d",&arr[i]);
        sort(arr,arr+n);
        scanf("%I64d",&k);
        for(int i=0; i<k; i++){
            scanf("%I64d",&p);
            if(arr[n-1]<=p){
                cout<<n<<endl;
                continue;
            }
            long long k=upper_bound(arr,arr+n,p)-arr;
            printf("%I64d\n",k);
        }
    }
    return 0;
}
