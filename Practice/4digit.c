#include<stdio.h>
int main()
{
    int i,j,k;
       /* for(j=0; j<4; j++)
        {
            printf("*\n");
            for(k=0; k<=j; k++)
                printf(" ");
        }*/

    scanf("%d",&i);
        for(j=1; j<i; j++)
            printf("*");

        for(j=i; j>1; j--)
        {
            printf("*\n");
            for(k=1; k<j-1; k++)
            printf(" ");
        }

        for(j=1; j<i+1; j++)
            printf("*");
            //printf("*\n");
/*
        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j++)
            printf("*");
            printf("\n");
            for(k=0; k<2; k++)
                printf(" ");
        }
*/
}
