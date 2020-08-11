/*#include<stdio.h>
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
}*/

#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf("%d",j);
        for(k=j; k<=n; k++)
            printf("*");
        for(k=n; k>=j; k--)
            printf("*");
        for(j=i; j>=1; j--)
            printf("%d",j);
        printf("\n");
    }
}
