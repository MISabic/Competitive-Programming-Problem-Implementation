#include<stdio.h>

int main()
{
    int k,n,p,i;
    while(scanf("%d %d",&k,&n)==2){
        p=0;
        for(i=1; i<=k; i++)
            if(i%n==0) ++k;
        printf("%d\n",k);
    }
    return 0;
}
