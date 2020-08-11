#include<stdio.h>
#include<string.h>
#define eps 0.000000001

int main()
{
    long long arr[12]={10000,5000,2000,1000,500,200,100,50,20,10,5},i,j,n;
    double k;
    while(scanf("%lf",&k)==1){
        if(k==0.00) break;
        n=(long long)((k+eps)*100);
        long long table[n+1];
        memset(table, 0, sizeof(table));
        table[0] = 1;
        for(i=0; i<11; i++)
            for(j=arr[i]; j<=n; j++)
                table[j] += table[j-arr[i]];
        printf("%6.2f%17lld\n",k,table[n]);
    }
    return 0;
}
