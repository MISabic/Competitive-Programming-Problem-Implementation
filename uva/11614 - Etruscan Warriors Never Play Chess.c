/** n*(n+1)/2 = num;
*  n^2+n=2*num;
*  n^2+n+(-2*num)=0; [ax^2+bx+c]
*  sqrt(b*b-4*a*c) = sqrt(1-4*1*(-2*num)) = sqrt(1+8*num)
*  x = (-b(+-) del)/2a
*  only + value because del is always positive
*  so n = (-1+sqrt(1+8*num))/2
*/

#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,num,res;
    scanf("%lld",&n);
    while(n!=0)
    {
        scanf("%lld",&num);
        res=(-1+sqrt(1+8*num))/2;
        printf("%lld\n",res);
        --n;
    }
    return 0;
}
