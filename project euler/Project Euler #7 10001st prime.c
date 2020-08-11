#include<stdio.h>

long int arr[105050],i,num;

long int prime(long int n)
{
    if(n%2==0 || n==1)
        return 1;
    for(i=3; i*i<=n; i+=2)
        if(n%i==0)
            return 1;
    return 0;
}

int main()
{
    long int i,t,c=1;
    arr[0]=2;
    for(i=3; i<105000; i+=2)
        if(prime(i)==0){
            arr[c]=i;
            ++c;
        }
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&num);
        printf("%ld\n",arr[num-1]);
    }
    return 0;
}
