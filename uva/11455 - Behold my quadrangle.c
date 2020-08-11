#include<stdio.h>

int main()
{
    long int t,a,b,c,d;
    scanf("%ld",&t);
    while(t!=0)
    {
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        if(a+b+c>d && b+c+d>a && c+d+a>b && d+a+b>c)
        {
            if(a==b && b==c && c==d && d==a)
                printf("square\n");
            else if(a*b==c*d || b*c==d*a || c*d==a*b || d*a==b*c)
                printf("rectangle\n");
            else
                printf("quadrangle\n");
        }
        else
            printf("banana\n");
        --t;
    }
    return 0;
}
