#include<stdio.h>
#define min(a,b) (a<b)?a:b

int main()
{
    int n,i,k1,k2,p1,p2,sum;
    char arr[1005],brr[1005];
    while(scanf("%d",&n)==1){
        scanf("%s %s",arr,brr);
        sum=0;
        for(i=0; i<n; i++){
            k1=(arr[i]-'0')+1;
            k2=(brr[i]-'0')+1;
            p1=abs(k1-k2);
            p2=10-p1;
            sum+=min(p1,p2);
        }
        printf("%d\n",sum);
    }
    return 0;
}
