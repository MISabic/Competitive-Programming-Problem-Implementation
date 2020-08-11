#include<stdio.h>
#define MOD 1589540031LL

long long arr[100005];

int main()
{
    long long t,n,i,count=1;
    for(i=1; i<=100001; i++){
        count=((i%MOD)*(count%MOD))%MOD;
        arr[i]=count;
    }
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n",arr[n]);
    }
    return 0;
}
