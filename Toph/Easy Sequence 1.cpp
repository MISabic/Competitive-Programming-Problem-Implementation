#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[150],n,t,i,k=0;
    arr[1]=1;
    for(int i=1; i<=40; i++){
        arr[i*2]=(arr[i]*arr[i])+1;
        arr[i*2+1]=(arr[i]*arr[i+1])+2;
    }
    scanf("%lld",&t);
    while(t--){
        cin>>n;
        for(i=1; i<=50; i++){
            if(arr[i]==n){
                printf("Case %lld: %lld\n",++k,i);
                continue;
            }
        }
    }
    return 0;
}
