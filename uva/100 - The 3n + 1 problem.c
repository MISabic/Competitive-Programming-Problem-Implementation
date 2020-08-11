/*#include<stdio.h>
#include<stdlib.h>

long long int num(long long int i,long long int j)
{
    long long int m,n,max=0,count=0;
    for(m=j; m>=i; m--)
        {
            n=m;
            while(n)
            {
                if(n==1)
                    break;
                if(n%2!=0)
                {
                    n=n*3+1;
                    ++count;
                }
                else
                {
                    n=n/2;
                    ++count;
                }
            }
            if(max<count)
                max=count;
            count=0;
        }
    return max+1;
}
int main()
{
    long long int i,j;
    A:
    scanf("%lld %lld",&i,&j);
    if(i>0 && i<1000000 && j>0 && j<1000000)
    {
        if(j<=250000)
            printf("%lld %lld %lld\n",i,j,num(i,j));
        else if(j>250000 && j<=500000)
            printf("%lld %lld %lld\n",i,j,num(i,j));
        else if(j>500000 && j<=750000)
            printf("%lld %lld %lld\n",i,j,num(i,j));
        else if(j>750000)
            printf("%lld %lld %lld\n",i,j,num(i,j));
    }
    else
        return 0;
    goto A;
}*/
#include<stdio.h>

int main()
{
    long long int i,j,n=999999,m,count=0,max=0;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i>0 && i<1000000 && j>0 && j<1000000)
        {
            if(i>j)
            {
                for(m=i; m>=j; m--)
                {
                    n=m;
                    while(n)
                    {
                        if(n==1)
                            break;
                        if(n%2!=0)
                        {
                            n=n*3+1;
                            ++count;
                        }
                        else
                        {
                            n=n/2;
                            ++count;
                        }
                    }
                    if(max<count)
                        max=count;
                    count=0;
                }
            }
            else
            {
                for(m=i; m<=j; m++)
                {
                    n=m;
                    while(n)
                    {
                        if(n==1)
                            break;
                        if(n%2!=0)
                        {
                            n=n*3+1;
                            ++count;
                        }
                        else
                        {
                            n=n/2;
                            ++count;
                        }
                    }
                    if(max<count)
                        max=count;
                    count=0;
                }
            }
        }
    else
        return 0;
    printf("%lld %lld %lld\n",i,j,max+1);
    max=0;
    }
    return 0;
}
