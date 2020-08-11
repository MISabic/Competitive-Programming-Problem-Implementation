#include<stdio.h>
#include<string.h>

int main()
{
    long long n,i,j,arr[6]={1,5,10,25,50};
    while(scanf("%lld",&n)==1){
        long long total[n+1];
        memset(total,0,sizeof(total));
        total[0]=1;
        for(i=0; i<5; i++)
            for(j=arr[i]; j<=n; j++)
                total[j]+=total[j-arr[i]];
        if(total[n]!=1)
            printf("There are %lld ways to produce %lld cents change.\n",total[n],n);
        else
            printf("There is only %lld way to produce %lld cents change.\n",total[n],n);
    }
    return 0;
}
