#include<stdio.h>

int main()
{
    int n,k,p;
    while(scanf("%d %d",&n,&k)==2){
        p=n/k;
        printf("%d\n",k*(p+1));
    }
    return 0;
}
