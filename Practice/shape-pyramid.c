#include<stdio.h>

void printStarPyramid (int lines);

int main()
{
    int lines;
    scanf("%d",&lines);
    printStarPyramid(lines);
}

void printStarPyramid(int lines)
{
    int i,j,k;
    for(i=1; i<=lines*2-1; i+=2)
    {
       for(j=lines*2-1; j>i; j-=2)
            printf(" ");

       for(k=1; k<=i; k++)
            printf("*");

    printf("\n");
    }
}
