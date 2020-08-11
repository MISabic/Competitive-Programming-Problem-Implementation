#include<stdio.h>

long long int arr[1000000];

long long int test()
{
    /**loading numbers from 1 to 1000000 before taking input
    *  if the number is prime & also a digit prime then +1 and assign the value
    *  else assign the value of "i-1"
    */
    long long int i,j,rem=0;
    arr[0]=0;
    for(i=1; i<=1000000; i++)
    {
        if(prime(i)==1)
        {
            j=i;
            while(j!=0)
            {
                rem=rem+j%10;
                j=j/10;
            }
            if(prime(rem)==1)
                arr[i]=1+arr[i-1];
            else
                arr[i]=arr[i-1];
        }
        else
            arr[i]=arr[i-1];
        rem=0;
    }
}

 int prime(long long int n)
{
    long long int i;
    if(n==2)
        return 1;
    if(n%2==0 || n==1)
        return 0;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    long long int n,a,b,i,rem=0,count=0;
    test();//loading
    scanf("%lld",&n);
    while(n!=0)
    {
        scanf("%lld %lld",&a,&b);
        /**have to check if 'a' is prime and also a digit prime
         * cause "b-a" is not gonna count a
         * if a is prime & digit prime count++
         * else count=0
         */
        if(prime(a)==1)
        {
            i=a;
            while(i!=0)
            {
                rem=rem+i%10;
                i=i/10;
            }
            if(prime(rem)==1)
                count++;
        }
        printf("%lld\n",(arr[b]-arr[a])+count);
        count=rem=0;
        --n;
    }
    return 0;
}
