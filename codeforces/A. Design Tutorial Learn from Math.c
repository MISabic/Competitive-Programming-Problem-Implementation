#include<stdio.h>

int prime(int n)
{
    int i;
    if(n==2) return 0;
    if(n%2==0 || n==1) return 1;
    for(i=3; i*i<=n; i+=2)
        if(n%i==0)
            return 1;
    return 0;
}

int main()
{
    int n,i;
    while(scanf("%d",&n)==1){
        for(i=4; i<n; i++){
            if(prime(i)==1 && prime(n-i)==1){
                printf("%d %d\n",i,n-i);
                break;
            }
        }
    }
    return 0;
}
