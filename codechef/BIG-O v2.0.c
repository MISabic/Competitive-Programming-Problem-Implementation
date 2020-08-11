/*#include<stdio.h>
#include<string.h>

int main()
{
    long long t,n,i,k,j=0,arr[1005];
    arr[0]=-1;
    memset(arr,-1,sizeof(arr));
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        k=n%1007;
        for(i=0; i<=j; i++){
            if(arr[i]==k) break;
        }
        if(arr[i]==k) continue;
        arr[j++]=k;
        printf("\n%lld\n",k);
    }
    return 0;
}*/

#include<stdio.h>
#define max 1000000007

int main()
{
    long long t,n,i,k,j=0,arr[105];
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        k=1;
        for(i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        for(i=0; i<n; i++){
            k=((arr[i]%max)*(k%max))%max;
        }
        printf("%lld\n",k%max);
    }
    return 0;
}

