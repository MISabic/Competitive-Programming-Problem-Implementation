#include<stdio.h>

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)==2)
    if(m>=1 && m<=300 && n>=1 && n<=300)
        printf("%d\n",(m*n)-1);
    else
        return 0;
}
