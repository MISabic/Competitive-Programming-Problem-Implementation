#include<stdio.h>

int main()
{
    int n,k,i,arr[100000];
    while(scanf("%d %d",&n,&k)==2){
        for(i=1; i<n; i++) scanf("%d",&arr[i]);
        i=1;
        while(i<k)
            i+=arr[i];
        if(i==k) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
