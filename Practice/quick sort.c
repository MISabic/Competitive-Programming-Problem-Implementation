#include<stdio.h>
#define n 9

int divide(int arr[],int start,int end)
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

int sort(int arr[],int start,int end)
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
                ++i;
                rec=0;
            }
            else
                --j;
        }
        else
        {
            if(arr[i]>pivot)
            {
                arr[j]=arr[i];
                --j;
                rec=1;
            }
            else
                ++i;
        }
    }
    arr[i]=pivot;
    return j;
}

int main()
{
    int i,arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    divide(arr,0,n);
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
}
