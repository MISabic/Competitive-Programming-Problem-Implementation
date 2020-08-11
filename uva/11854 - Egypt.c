#include<stdio.h>
#include<stdlib.h>

long int intSort(const long int *a, const long int *b)
{
    return (*a-*b);
}

int main()
{
    long int arr[3];
    while(scanf("%ld %ld %ld",&arr[0],&arr[1],&arr[2])==3)
    {
        if(arr[0]==0 && arr[1]==0 && arr[2]==0)
            break;
        qsort(arr,3,sizeof(long int),(int (*)(const void*, const void*))intSort);
        if(arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
