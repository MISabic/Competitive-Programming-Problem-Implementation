#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,arr[111];

    scanf("%lld",&n);
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }

    unordered_map<long long,long long>mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                mp[(arr[i]*arr[j])+arr[k]]++;
            }
        }
    }
    long long res=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(arr[k]!=0) res+=mp[(arr[i]+arr[j])*arr[k]];
            }
        }
    }
    printf("%lld\n",res);
    return 0;
}
