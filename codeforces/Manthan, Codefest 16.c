#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

long long int zero(long long int n)
{
    long long int result=0;
    while(n)
    {
        result+=n/5;
        n=n/5;
    }
    return result;
}

long long int test(long long int n)
{
    long long int i;
    for(i=0; i<100100; i++)
    {
        if(zero(i)==n)
            return i;
    }
    return 0;
}

int main()

{
    long long int n,i,j=0,k=5,l=6,arr[100100];
    while(scanf("%I64d",&n)==1)
    {
        if(test(n)==0)
            printf("0\n");
        else{
            i=test(n);
            printf("5\n%I64d %I64d %I64d %I64d %I64d\n",i,i+1,i+2,i+3,i+4);
        }
    }
    return 0;
}
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    long long int a,b,n,i,j,arr[1010],count,flag;
    while(scanf("%I64d %I64d %I64d",&a,&b,&n)==3)
    {
        flag=0;
        if(a%2==0 && b%2==0 && n%2!=0 || a>n && b>n)
        {
            printf("No\n");
            continue;
        }
        for(i=0; i<=10000; i++)
        {
            for(j=0; j<=10000; j++)
            {
                if(a*i+b*j>n)
                    break;
                if(a*i+b*j==n)
                {
                    printf("Yes\n");
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag!=1)
            printf("No\n");
    }
    return 0;
}
*/
