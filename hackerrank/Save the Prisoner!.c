#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>
#include<algorithm>

#define long long int ll
#define epsilon 0.000000001
#define pi acos(-1)
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
#define fequal(a,b) fabs(a-b)<epsilon
#define lcm(a,b) (a*b)/gcd(a,b)

int main()
{
    int t,n,k,p,keep,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&k,&p);
        keep=((k-1)+p)%n;
        if(keep==0)
            printf("%d\n",n);
        else
            printf("%d\n",keep);
    }
    return 0;
}
