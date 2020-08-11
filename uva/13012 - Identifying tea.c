#include<stdio.h>

int main()
{
    int t,arr[5],i,count;
    while(scanf("%d",&t)==1)
    {
        count=0;
        scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
        for(i=0; i<5; i++)
            if(arr[i]==t)
                count++;
        printf("%d\n",count);
    }
    return 0;
}
