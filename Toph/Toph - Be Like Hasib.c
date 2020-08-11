#include<stdio.h>

int main()
{
    long long n,x,start,end,count,mid;
    while(scanf("%lld %lld",&n,&x)==2)
    {
        start=1,end=n,count=0;
        while(start<end)
        {
            mid=(start+end)/2;
            if(x>mid)
            {
                start=mid+1;
                ++count;
                continue;
            }
            else
            {
                end=mid;
                ++count;
                continue;
            }
            if(x==mid)
                break;
        }
        printf("%lld\n",count);
    }
    return 0;
}
