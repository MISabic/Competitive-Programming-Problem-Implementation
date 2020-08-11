#include<stdio.h>
#define MAX 10000

long long int rem(char num[], long long int div)
{
    int i=0,j=0;
    long long int temp=0;
    while(num[i])
    {
        temp=temp*10+(num[i]-'0');
        temp=temp%div;
        ++i;
    }
    return temp;
}
int main()
{
    char num[MAX];
    long long int div;
    int value=0;
    while(scanf("%s",&num)==1)
    {
        if(value)
            printf("\n");
        value = 1;
        if(rem(num,4)==0 && rem(num,100)!=0 || rem(num,400)==0)
            printf("This is leap year.\n");
        if(rem(num,15)==0)
            printf("This is huluculu festival year.\n");
        if((rem(num,4)==0 && rem(num,100)!=0 || rem(num,400)==0) && rem(num,55)==0)
            printf("This is bulukulu festival year.\n");
        if(!(rem(num,4)==0 && rem(num,100)!=0 || rem(num,400)==0) && !((rem(num,4)==0 && rem(num,100)!=0 || rem(num,400)==0) && rem(num,55)==0) && rem(num,15)!=0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
