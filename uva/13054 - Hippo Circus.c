#include<stdio.h>
#include <stdlib.h>

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int i,j,t,n,h,ta,td,arr[101010],count,c=1;
    scanf("%d",&t);
    while(t--)
    {
        j=count=0;
        scanf("%d %d %d %d",&n,&h,&ta,&td);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        if(ta*2<td)
        {
            printf("Case %d: %d\n",c++,n*ta);
            continue;
        }
        qsort(arr,n,sizeof(int),(int (*)(const void*, const void*))intSort);
        for(i=n-1; i>=0; i--)
        {
            if(i!=j && arr[i]!=-1 && arr[j]!=-1)
            {
                if(arr[i]+arr[j]<h)
                {
                    arr[i]=arr[j]=-1;
                    ++j;
                    count+=td;

                }
                else if(arr[i]<h)
                {
                    count+=ta;
                    arr[i]=-1;
                }
            }
            else if(arr[i]!=-1 && arr[j]!=-1 && arr[i]<h)
            {
                count+=ta;
            }
        }
        printf("Case %d: %d\n",c++,count);
    }
    return 0;
}
