/*#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        //for(k=1; k<i; k++)
          //  printf(" ");
        //for(j=1; j<=n-2; j++)
            for(j=1; j<=n; j++)

        {
            if(j%2==0 && i%2==0)
                printf("*");
            else if(i==1 && j==1 || i==n && j==n)
                printf("%d",j);
            //else if(i+j==n+1)
              //  printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}*/

/*

#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i=1; i<=n-2; i++)
    {
        for(k=1; k<i; k++)
            printf(" ");
        if(i%2==0)
            printf("*");
        else
            printf("%d",i);
        printf("\n");
    }
}*/


/*
#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i=1; i<=n-2; i++)
    {
        if(i%2==0)
        {
            printf("*");
        }
        else
        {
            for(j=1; j<=n; j++)
            if(j==1 && j==5)
                printf("%d",j);
        }
        printf("\n");
    }
}*/



#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            if(i==j && i%2!=0 && j%2!=0 || i+j==n+1 && i%2!=0 && j%2!=0)
                printf("%d",j);
            else if(i==j && i%2==0 && j%2==0 || i+j==n+1 && i%2==0 && j%2==0)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}
