/*#include<stdio.h>

long int arr[1000000];

int main()
{
    long int n,i,k;
    arr[0]=1;
    for(i=1; i<=1000000; i++)
    {
        arr[i]=(i*6)+arr[i-1];
    }
    while(scanf("%ld",&n)==1)
    {
        printf("%ld\n",arr[n]);
    }
    return 0;
}*/


#include<stdio.h>

int main()
{
    long long int n,k,numlessk;
    while(scanf("%I64d",&n)==1)
    {
        if(n==0){
            printf("1\n");
            continue;
        }
        k=(n*6)+1;
        numlessk=((n-1)*(n))/2;
        printf("%I64d\n",k+numlessk*6);
    }
    return 0;
}
