#include<stdio.h>
#define pi 3.14159

int main()
{
    double n;
    while(scanf("%lf",&n)==1)
        printf("A=%.4f\n",pi*n*n);
    return 0;
}
