#include<stdio.h>

int main()
{
    int n,k1,k2,i;
    while(scanf("%d",&n)==1){
        k1=k2=0;
        for(i=n; i>0; i-=7){
            if(i<2) ++k1;
            else k1+=2;
        }
        n-=5;
        for(i=n; i>0; i-=7){
            if(i<2) ++k2;
            else k2+=2;
        }
        printf("%d %d\n",k2,k1);
    }
    return 0;
}
