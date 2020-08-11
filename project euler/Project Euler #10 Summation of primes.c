#include<stdio.h>

long int prime(long int n)
{
    int i;
    if(n%2==0 || n==1)
        return 1;
    for(i=3; i*i<=n; i+=2)
        if(n%i==0)
            return 1;
    return 0;
}

int main()
{
    long long t,n,i,c=1,k,arr[90000];
    arr[0]=2;
    for(i=3; i<=1000000; i+=2)
        if(prime(i)==0){
            arr[c]=i;
            ++c;
        }
    scanf("%lld",&t);
    while(t--){
        k=0;
        scanf("%lld",&n);
        for(i=0; i<n; i++){
            if(arr[i]>n) break;
            else
                k+=arr[i];
        }
        printf("%lld\n",k);
    }
    return 0;
}
