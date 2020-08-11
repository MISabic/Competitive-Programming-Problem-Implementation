#include<stdio.h>
#include<math.h>

int main()
{
    long long n,k,p;
    while(scanf("%I64d %I64d",&n,&k)==2){
        p=ceil(n/2.0);
        if(k<=p) printf("%I64d\n",2*(k-1)+1);
        else printf("%I64d\n",2*(k-p));
    }
    return 0;
}
