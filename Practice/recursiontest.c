#include<stdio.h>

int recur(int n)
{
    int total=0,i;
    //(n>0)?total+=recur(n-1):printf("%d",total);
    if(n!=0)
        return n+recur(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",recur(n));
}
