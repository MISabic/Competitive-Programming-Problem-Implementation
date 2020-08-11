#include<stdio.h>

int main()
{
    int n,k;
    while(scanf("%d",&n)==1){
        if(n%3==0) k=(n/3)*2;
        else if((n-1)%3==0) k=((n+1)/3)*2+1;
        else if((n-2)%3==0) k=((n+1)/3)*2-1;
        printf("%d\n",k);
    }
    return 0;
}
