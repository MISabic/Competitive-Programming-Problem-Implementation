#include<stdio.h>

int main()
{
    int a,b,c,d,count;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        count=0;
        if(a>b)
            count+=(a-b);
        else if(a<b)
            count+=(40-(b-a));
        if(b>c)
            count+=(40-(b-c));
        else if(b<c)
            count+=(c-b);
        if(c>d)
            count+=(c-d);
        else if(c<d)
            count+=(40-(d-c));
        printf("%d\n",(count+120)*9);
    }
    return 0;
}
