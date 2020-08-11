#include<stdio.h>
#include<math.h>
long long int recur(long long int n1, long long int n2, long long int n3)
{
    if(n1 > n2 && n1 > n3)
        return recur(n1-1, n2, n3);
    else if(n2 > n1 && n2 > n3)
        return recur(n1, n2-1, n3);
    else if(n3 > n1 && n3 > n2)
        return recur(n1, n2, n3-1);
    else
        return (n1 + n2 + n3);
}
int main()
{
    long long int n1,n2,n3,n4;
    scanf("%lld %lld %lld",&n1,&n2,&n3);
    if(n1>=1 && n2>=1 && n3>=1 && n1<=1000000000 && n2>=1000000000 && n3>=1000000000)
        n4=recur(n1,n2,n3);
    else
        return 0;
    printf("%lld\n",n4);
}
