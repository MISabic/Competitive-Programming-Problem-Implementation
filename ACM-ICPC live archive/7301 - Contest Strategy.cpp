#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,l,arr[100],c=0;
    cin>>t;
    while(t--){
        cin>>n>>l;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        long long k=0,num=0,total=0;
        for(int i=0; i<n; i++){
            k+=arr[i];
            if(k>l){
                k-=arr[i];
                break;
            }
            total=total+k;
            ++num;
        }
        printf("Case %lld: %lld %lld %lld\n",++c,num,k,total);
    }
    return 0;
}
