#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t,n,i,arr[100000],count;
    scanf("%d",&t);
    while(t--){
        count=0;
        scanf("%d",&n);
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        if(n==1){
            printf("%d\n",arr[0]);
            continue;
        }
        for(i=0; i<n; i++){
            if((i+arr[i])>=(n)) break;
            count+=abs(arr[i+arr[i]]-arr[i]);
            if(i==(n-1)) break;
            i+=(arr[i]-1);
        }
        if(i!=(n-1)) count+=(arr[n-1]-arr[i]);
        printf("%d\n",count);
    }
    return 0;
}
