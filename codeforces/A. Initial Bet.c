#include<stdio.h>

int main()
{
    int a,b,c,d,e,sum;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5){
        sum=a+b+c+d+e;
        if(sum%5==0 && sum!=0) printf("%d\n",sum/5);
        else printf("-1\n");
    }
    return 0;
}
