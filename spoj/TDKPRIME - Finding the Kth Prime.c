#include<stdio.h>
#include<string.h>
#define max 5000005

int arr[max],state[86028122];

int main()
{
    int t,i,j,k=1,n=86028122;
    memset(state,0,max);
    arr[1]=2;
    for(i=3; i*i<=n; i+=2){
        if(state[i]==0){
            arr[++k]=i;
            for(j=i*i; j<=n; j+=i+i)
                state[j]=1;
        }
    }
    for(i; i<n; i+=2) if(state[i]==0)
        arr[++k]=i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",arr[n]);
    }
    return 0;
}
