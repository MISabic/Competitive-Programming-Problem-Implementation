#include<stdio.h>

int main()
{
    int n,a,b,keep;
    while(scanf("%d %d %d",&n,&a,&b)==3){
        if(b<0) keep=(a+b)%n+n;
        else keep=(a+b)%n;
        if(keep==0) printf("%d\n",n);
        else{
            if(keep>n) printf("%d\n",keep-n);
            else printf("%d\n",keep);
        }
    }
    return 0;
}
/*#include <stdio.h>

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int r = (a+b)%n;
    if(r<=0) r+=n;
    printf("%d",r);
}*/
