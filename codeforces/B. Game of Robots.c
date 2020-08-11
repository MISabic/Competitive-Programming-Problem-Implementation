#include<stdio.h>

int main()
{
    int arr[100005],i,n,k;
    while(scanf("%d %d",&n,&k)==2){
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=1; ; i++){
            if(k-i<=0) break;
            k-=i;
        }
        printf("%d\n",arr[k-1]);
    }
    return 0;
}
