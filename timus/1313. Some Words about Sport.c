#include<stdio.h>

int main()
{
    int arr[105][105],n,i,j,k;
    while(scanf("%d",&n)==1){
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                scanf("%d",&arr[i][j]);
        printf("%d",arr[1][1]);
        for(i=2; i<=n; i++){
            j=1,k=i;
            while(k>=1)
                printf(" %d",arr[k--][j++]);
        }
        for(i=2; i<=n; i++){
            j=n,k=i;
            while(k<=n)
                printf(" %d",arr[j--][k++]);
        }
        printf("\n");
    }
    return 0;
}
