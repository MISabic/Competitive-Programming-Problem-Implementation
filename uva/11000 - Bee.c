#include<stdio.h>

int main()
{
    long long int arr[75],i,y,m,mf;
    arr[0]=0,arr[1]=1;
    for(i=2; i<=70; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    while(scanf("%lld",&y)==1)
    {
        if(y==-1)
            break;
        if(y==0)
        {
            printf("0 1\n");
            continue;
        }
        mf=arr[y+1];
        m=arr[y];
        for(i=y; i>=2; i--)
        {
            mf=mf+arr[i];
            m=m+arr[i-1];
        }
        printf("%lld %lld\n",m,mf+1);
    }
    return 0;
}
