#include<stdio.h>
#include<string.h>
#define MAX 100000007

int main()
{
    long long arr[105],i,j,n,t,k,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&k,&n);
        for(i=0; i<k; i++)
            scanf("%lld",&arr[i]);
        long long table[n+1];
        memset(table, 0, sizeof(table));
        table[0] = 1;
        for(i=0; i<k; i++)
            for(j=arr[i]; j<=n; j++)
                table[j] = (table[j]%MAX)+(table[j-arr[i]]%MAX);
        printf("Case %lld: %lld\n",++c,table[n]%MAX);
    }
    return 0;
}
