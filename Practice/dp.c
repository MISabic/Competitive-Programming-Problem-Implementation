#include<stdio.h>

long long intSort(const long long *a, const long long *b){ return (*a-*b);}

int main()
{
    long long arr[105],i,j,n,t,k;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&k,&n);
        for(i=0; i<2*k; i++)
            scanf("%lld",&arr[i]);
        //qsort(arr, sizeof(arr)/sizeof(long long), sizeof(long long), (long long (*)(const void*, const void*))intSort);
        int table[n+1];
        memset(table, 0, sizeof(table));
        table[0] = 1;
        for(i=0; i<2*k; i++)
            for(j=1; j<=n; j++)
                table[j] += table[j-arr[i]];//printf("++%d %d %d %d\n",i,j,arr[i],j-arr[i]);}
        printf("%d\n",table[n]);
    }
    return 0;
}
