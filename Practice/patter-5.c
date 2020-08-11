#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            if(j!=k)
                printf("%d",j);
            else
                printf("*");
        }
        ++k;
        printf("\n");
    }
}
