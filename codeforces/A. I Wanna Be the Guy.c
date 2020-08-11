#include<stdio.h>
#include<string.h>

int main()
{
    int n,x,i,k;
    while(scanf("%d",&n)==1){
        int arr[n+1],flag=0;
        memset(arr,0,sizeof arr);
        scanf("%d",&x);
        for(i=0; i<x; i++){
            scanf("%d",&k);
            arr[k]=k;
        }
        scanf("%d",&x);
        for(i=0; i<x; i++){
            scanf("%d",&k);
            arr[k]=k;
        }
        for(i=1; i<=n; i++)
            if(arr[i]==0){
                printf("Oh, my keyboard!\n");
                flag=1;
                break;
            }
        if(flag==0) printf("I become the guy.\n");
    }
    return 0;
}
