#include<stdio.h>
#include<math.h>

long long int arr[1000010];

int main()
{
    long long int k,i,j,count=0;
    for(i=2; i<=1000010; i++)
    {
        k=i;
        while(k%2==0)
        {
            k=k/2;
            ++count;
        }
        for(j=3; j<=sqrt(k); j+=2)
        {
            while(k%j==0)
            {
                k=k/j;
                ++count;
            }
        }
        if(k>1)
            ++count;
        arr[i]=count;
    }
    while(scanf("%lld",&i)==1)
    {
        printf("%lld\n",arr[i]);
    }
    return 0;
}
