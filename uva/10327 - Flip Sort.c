#include<stdio.h>

long long int count=0;

long long int sort(long long int arr[], long long int start, long long int end)
{
    long long int i,j,flag=0,temp,pivot;
    i=start;
    j=end;
    pivot=arr[start];
    while(i<j)
    {
    if(flag==0)
    {
        if(arr[j]<=pivot)
        {
            arr[i]=arr[j];
            i++;
            flag=1;
            count++;
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
            flag=0;
            count++;
        }
        else
            i++;
    }
    }
    count++;
    arr[j]=pivot;
    printf("%lld %lld %lld %lld %lld\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
    return j;
}


long long int divide(long long int arr[], long long int start, long long int end)
{
    long long int pivot;
    if(start>=end)
        return 0;
    else
    {
        pivot=sort(arr,start,end);
        divide(arr,start,pivot-1);
        divide(arr,pivot+1,end);
    }
}

int main()
{
    long long int arr[1000],n,i;
    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        divide(arr,0,n-1);
        for(i=0; i<n; i++)
            printf("%lld ",arr[i]);
        //printf("%lld\n\n",count);
        count=0;
    }
}
