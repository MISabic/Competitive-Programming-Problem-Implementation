#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,arr[60],i,k;
    arr[1]=2;
    for(i=2; i<=56; i++)
    {
        arr[i]=pow(2,i)+arr[i-1];
    }
    while(scanf("%I64d",&n)==1)
        printf("%I64d\n",arr[n]);
    return 0;
}
