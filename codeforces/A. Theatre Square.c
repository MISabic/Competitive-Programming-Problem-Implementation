#include<stdio.h>
#include<math.h>

int main()
{
    long long a,b,c,x,y;
    while(scanf("%I64d %I64d %I64d",&a,&b,&c)==3)
        printf("%I64d\n",(long long)ceil((double)a/(double)c)*(long long)ceil((double)b/(double)c));
    return 0;
}
