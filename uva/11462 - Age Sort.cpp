#include<stdio.h>

int main()
{
    long long int i,j,n,temp;
    while(scanf("%lld",&n)==1)
    {
        long long int arr[n];
        if(n==0)
            break;
        for(i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
            printf("%lld ",arr[i]);
        printf("\n");
    }
    return 0;
}
