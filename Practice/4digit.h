#include<stdio.h>
int main()
{
    int i,j,fact=1;
    scanf("%d",&j);
    for(i=2;i<=j;i++)
        fact*=i;
    printf("%d",fact);
}
