#include<stdio.h>

int main()
{
    int h,m,a,div,rem,keep;
    while(scanf("%d:%d",&h,&m)==2)
    {
        scanf("%d",&a);
        keep=m+a;
        rem=keep%60;
        div=keep/60;
        printf("%02d:%02d\n",(h+div)%24,rem);
    }
    return 0;
}
