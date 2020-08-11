#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stringList[5][5] = {"sad","bad","mad","good","ugly"};
int intList[] = {9,4,2,5,7,1,6,8,3};

int stringSort(const void *a,const void *b)
{
    return (strcmp((char *)a, (char *)b));
}

int intSort(const int *a, const int *b)
{
    //printf("\t%d %d\n",*a,*b);
    return (*a-*b);
}

int main(void)
{
    int x;
    printf("\nSorted string list : ");
    qsort((void *)stringList, 5, sizeof(stringList[0]), stringSort);
    for(x=0; x<5; x++)
    {
        printf("\n%s",stringList[x]);
    }
    printf("\n\nSorted integer list : ");
    qsort(intList, sizeof(intList)/sizeof(int), sizeof(int), (int (*)(const void*, const void*))intSort);
    printf("%d\n",sizeof(intList)/sizeof(int));
    for(x=0; x<9; x++)
    {
        printf("\n%d", intList[x]);
    }
    return 0;
}
