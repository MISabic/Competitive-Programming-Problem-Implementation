#include<stdio.h>

int main()
{
    int n,k;
    while(scanf("%d",&n)==1)
        (n==0)?printf("1\n"):(n<0)?printf("%d\n",~(n*(n-1)/2)+2):printf("%d\n",n*(n+1)/2);
    return 0;
}
