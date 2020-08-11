#include<bits/stdc++.h>
using namespace std;

long long arr[100100];

int main()
{
    long long n;
    while(cin>>n){
        map<long long,int>mp;
        for(int i=0; i<n; i++){
            scanf("%lld",&arr[i]);
            mp[arr[i]]++;
        }
        long long res=0,k=n;
        for(int i=0; i<n; i++){
            res+=(k-mp[arr[i]]);
            --mp[arr[i]],--k;
        }
        printf("%lld\n",res);
    }
    return 0;
}
