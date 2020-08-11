#include<stdio.h>

int main()
{
    int n,arr[100],i,j,flag,count,k;
    while(scanf("%d",&n)==1){
        count=0;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(i=1; i<90; i++){
            flag=0;
            for(j=0; j<n; j++){
                if(i==arr[j]){
                    count=0;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ++count;
            }
            if(count==15) break;
        }
        printf("%d\n",i);
    }
    return 0;
}
