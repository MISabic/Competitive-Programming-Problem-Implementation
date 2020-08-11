/** The problem is actually to find lcm of numbers from 1 to N.
    The good old formula is to multiply all numbers and divide by gcd of all numbers.
    LCM(1,2,..,N)=∏(i=1 to n)i/gcd(1,2,..,N)
    While coding, the numerator can be a huge number. To avoid that we can also do like this
    Calculate LCM iteratively.
    We can simple iterate using the recurrence
    lcm(a,b,c)=lcm(lcm(a,b),c)andlcm(a,b)=a×bgcd(a,b)
    lcm(a,b,c)=lcm(lcm(a,b),c)andlcm(a,b)=a×bgcd(a,b)
    so we can simply iterate from 1, N storing LCM at each step.

    But I did it different way... =D
**/
#include<stdio.h>

long long prime(long long n)
{
    int i;
    if(n==2) return 0;
    if(n%2==0) return 1;
    for(i=3; i*i<=n; i+=2){
        if(n%i==0) return 1;
    }
    return 0;
}

long long divisor(long long n)
{
    long long i,p;
    if(n%2==0){
        while(n%2==0)
            n/=2;
        if(n==1) return 2;
        else return 0;
    }
    for(i=3; i*i<=n; i+=2)
    {
        p=n;
        if(p%i==0){
            while(p%i==0)
                p/=i;
        }
        if(p==1) return i;
    }
    return 0;
}

int main()
{
    long long int n,t,i,j,k,m,flag,arr[50];
    arr[1]=1;
    for(n=2; n<=40; n++){
        if(prime(n)==0)
            arr[n]=arr[n-1]*n;
        else if(divisor(n)!=0)
            arr[n]=arr[n-1]*divisor(n);
        else
            arr[n]=arr[n-1];
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",arr[n]);
    }
    return 0;
}
