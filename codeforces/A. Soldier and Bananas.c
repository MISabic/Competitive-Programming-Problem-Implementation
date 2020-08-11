#include<stdio.h>

int main()
{
    int k,m,n,s;
    while(scanf("%d %d %d",&k,&m,&n)==3){
        s=(n*(n+1)/2)*k;
        (s-m<=0) ? printf("0\n") : printf("%d\n",s-m);
    }
    return 0;
}
