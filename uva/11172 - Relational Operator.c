#include<stdio.h>
#include<math.h>

int main()
{
    long int t,a,b;
    scanf("%d\n",&t);
    if(t<15)
        while(t!=0)
        {
            scanf("%ld %ld",&a,&b);
            if(abs(a)<1000000001 && abs(b)<1000000001)
            {
                if(a<b)
                    printf("<\n");
                else if(b<a)
                    printf(">\n");
                else if(a==b)
                    printf("=\n");
                --t;
            }
            else
                break;
        }
    else
        exit(1);
    return 0;
}
