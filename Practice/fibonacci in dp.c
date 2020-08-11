#include<stdio.h>

long long arr[1000000];
long long fibo(long long u)
{
    if(u==0) return 0;
    if(u==1) return 1;
    if(arr[u]!=-1) return arr[u];
    arr[u]=fibo(u-1)+fibo(u-2);
    return arr[u];
}

int main()
{
    long long u;
    memset(arr,-1,sizeof(arr));
    //while(scanf("%lld",&u)==1){
        printf("%lld\n",fibo(90));
    //}
}
