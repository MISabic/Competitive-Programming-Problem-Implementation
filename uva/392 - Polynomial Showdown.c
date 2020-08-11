#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10],i,j,flag;
    while(scanf("%d",&arr[1])!=EOF){
        for(i=2; i<10; i++)
            scanf("%d",&arr[i]);
        flag=0;
        for(i=1; i<10; i++){
            if(arr[i]!=0){
                if(flag==0 && arr[i]<0) printf("-");
                if(arr[i]<0 && flag==1) printf(" - ");
                else if(arr[i]>0 && flag==1)printf(" + ");
                if(i==9) printf("%d",abs(arr[i]));
                else if(arr[i]==1 || arr[i]==-1){
                    if(9-i==1) printf("x");
                    else printf("x^%d",9-i);
                }
                else if(9-i==1) printf("%dx",abs(arr[i]));
                else printf("%dx^%d",abs(arr[i]),9-i);
                flag=1;
            }
        }
        if(flag==0) printf("0");
        printf("\n");
    }
    return 0;
}
