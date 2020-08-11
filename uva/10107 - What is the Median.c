#include<stdio.h>
#include<math.h>

int main()
{
    long long int i=0,arr[10000],temp,n,j;
    scanf("%lld",&arr[++i]);
    printf("%lld\n",arr[i]);
    while(scanf("%lld",&arr[++i])==1)
    {
        for(j=0; j<i; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        if(i%2!=0)
        {
            n=(int)ceil((double)i/2);
            printf("%lld\n",arr[n]);
        }
        if(i%2==0)
        {
            n=i/2;
            n=(arr[n]+arr[n+1])/2;
            printf("%lld\n",n);
        }
    }
    return 0;
}
