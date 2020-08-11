#include<stdio.h>

int seriesSum1 (int a);

int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    printf("%d",seriesSum1(n));
}

int seriesSum1 (int a)
{
        int i,even=0,odd=0;
    for(i=a; i>=1; i--)
    {
        if(i%2==0)
            even+=i*i;
        else
            odd+=i*i;
    }
    return even-odd;
}
