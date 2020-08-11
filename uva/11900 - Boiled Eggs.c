#include<stdio.h>
#include<stdlib.h>

int intSort(const int *a,const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,i,n,p,q,arr[35],count,track=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&p,&q);
        count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))intSort);
        for(i=0; i<n; i++)
        {
            q=q-arr[i];
            if(q>=0)
                ++count;
            else
                break;
        }
        if(count<p)
            printf("Case %d: %d\n",++track,count);
        else
            printf("Case %d: %d\n",++track,p);
    }
    return 0;
}
