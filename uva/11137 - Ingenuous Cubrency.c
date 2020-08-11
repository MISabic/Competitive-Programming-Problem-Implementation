#include<stdio.h>
#include<string.h>

int main()
{
    long long n,i,j,arr[22]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
    while(scanf("%lld",&n)==1){
        long long total[n+1];
        memset(total,0,sizeof(total));
        total[0]=1;
        for(i=0; i<21; i++)
            for(j=arr[i]; j<=n; j++)
                total[j]+=total[j-arr[i]];
        printf("%lld\n",total[n]);
    }
    return 0;
}
