#include<stdio.h>

int bigmod(int b, int p, int m)
{
    int ret;
    if(p==0)
        return 1;
    if(p%2==0)
    {
        ret=bigmod(b,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((b%m)*(bigmod(b,p-1,m)))%m;
}

int main()
{
    int m,n,arr[20],i,count=0;
    while(scanf("%d",&m)==1)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        if(n==1)
        {
            printf("Case #%d: %d\n",++count,arr[0]%m);
            continue;
        }
        for(i=n-2; i>=0; i--)
        {
            //printf("%d %d %d\n",i,arr[i],arr[i+1]);
            arr[i]=bigmod(arr[i],arr[i+1],m);
            printf("%d %d %d\n",arr[0],arr[1],arr[2]);
        }
        /*if(arr[i+1]==1 && arr[i+2]==0)
        {
            printf("Case #%d: 0\n",++count);
            continue;
        }*/
        printf("Case #%d: %d\n",++count,arr[i+1]);
    }
    return 0;
}
