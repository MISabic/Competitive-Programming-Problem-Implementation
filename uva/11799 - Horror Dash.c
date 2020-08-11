#include<stdio.h>

int main()
{
    long int i,n,t,arr[10000],max,count=0;
    scanf("%ld",&t);
    while(t!=0)
    {
        scanf("%ld %ld",&n,&arr[0]);
        max=arr[0];
        for(i=0; i<n-1; i++)
        {
            scanf("%ld",&arr[i]);
            if(max<arr[i])
                max=arr[i];
        }
        printf("Case %ld: %ld\n",++count,max);
        --t;
    }
    return 0;
}
