#include<stdio.h>

long long phi(long long n)
{
    float res=n;
    long long i;
    if(n%2==0){
        while(n%2==0)
            n/=2;
        res*=(1-1/2.0);
    }
    for(i=3; i*i<=n; i+=2){
        if(n%i==0){
            while(n%i==0)
                n/=i;
            res*=(1-1/(float)i);
        }
    }
    if(n>2)
        res*=(1-1/(float)n);
    return (long long)res;
}

int main()
{
    long long int t,n,i,j,h=0,x=0,arr[11111],brr[10005];
    for(i=1; i<=10101; i++)//pre-calculated phi
        arr[i]=phi(i);
    i=1;
    for(n=1; n<=10000; n++){
        for(i; i<=n; i++){
            for(j=1; j<n; j++){
                h+=arr[i]*arr[j];
            }
        }
        x=0;
        for(i=1; i<=n; i++)//for diagonal part of the matrix
            x+=arr[i]*arr[i];
        brr[n]=h*2+x;
    }
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        /*for(i=1; i<=n; i++){
            for(j=i+1; j<=n; j++){
                h+=arr[i]*arr[j];
            }
        }
        for(i=1; i<=n; i++)
            x+=arr[i]*arr[i];
        printf("%lld\n",h*2+x);*/
        printf("%lld\n",brr[n]);
    }
    return 0;
}
