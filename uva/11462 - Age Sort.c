/*#include<stdio.h>
#include<stdlib.h>

int divide(int arr[], int start, int end)
{
    int pivot;
    if(start>=end)
        return ;
    else
    {
        pivot=sort(arr,start,end);
        divide(arr,start,pivot-1);
        divide(arr,pivot+1,end);
    }
}

int sort(int arr[], int start, int end)
{
    int i,j,pivot,rec=1;
    pivot=arr[start];
    i=start;
    j=end;
    while(i<j)
    {
        if(rec)
        {
            if(arr[j]<pivot)
            {
                arr[i]=arr[j];
                i++;
                rec=0;
            }
            else
                j--;
        }
        else
        {
            if(arr[i]>pivot)
            {
                arr[j]=arr[i];
                j--;
                rec=1;
            }
            else
                i++;
        }
    }
    arr[j]=pivot;
    return j;
}

int main()
{
    int i,j,n,temp,*arr;
    while(scanf("%d",&n)==1)
    {
        arr=malloc(n*sizeof(int));
        if(n==0)
            break;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        divide(arr,0,n-1);
        for(i=0; i<n; i++)
        {
            printf("%d",arr[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
        free(arr);
    }
    return 0;
}*/


#include<stdio.h>
#include<stdlib.h>

long int intSort(const long int *a, const long int *b)
{
    return (*a-*b);
}

int main()
{
    long int i,n,*arr;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        arr=malloc(n*sizeof(long int));
        for(i=0; i<n; i++)
            scanf("%ld",&arr[i]);
        qsort(arr,n,sizeof(long int),(int (*)(const void*, const void*))intSort);
        for(i=0; i<n; i++)
        {
            printf("%ld",arr[i]);
            if(i!=n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

