#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    scanf("%d", &n);

    for(i=n; i>0; i--)
    {
        for(k=i; k>1; k--)
            printf(" ");

        for(j=n; j>=i; j--)
            printf("%d",j);

        if(j<n)

            for(l=i+1; l<=n; l++)
                printf("%d",l);

        printf("\n");
    }
}
