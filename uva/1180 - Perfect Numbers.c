/*#include<stdio.h>
#include<math.h>

long long int isprime(long long int n)
{
    long int i,count=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            ++count;
        else
            ++count;
    }
    return count;
}

int main()
{
    long long int n,i=0,j,arr[10000],sum,total=0,m,p;
    while(scanf("%lld",&n))
    {
        if(n>0)
        {
        for(i=0; i<n; i++)
        {
            scanf("%lld,",&arr[i]);
        }
        i=0;
        for(i; i<n; i++)
        {
            sum=pow(2,arr[i]-1)*(pow(2,arr[i])-1);
            if(sum>pow(2,33))
                return 0;
            m=pow(2,arr[i]-1);
            p=(pow(2,arr[i])-1);
            //if(isprime(m) || isprime(p))
            //printf("\t%lld\t%lld\n",m,p);
            if(isprime(m)==0 || isprime(p)==0)
                printf("Yes\n");
            else
                printf("No\n");
            total=0;
        }
        }
        else
            return 0;
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

long long int isprime(long long int n)
{
    long long int i,count=0;
    for(i=2; i<n; i++)
        if(!(n%i))
            ++count;
    if(count==0)
        return 1;
}

int main()
{
    long long int n,i,sum,m,p;
    char ch;
    int *arr;
    scanf("%lld,",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d",arr+i);
        scanf("%c",&ch);
    }
    for(i=0; i<n; i++)
    {
        if(*(arr+i)>1)
        {
            m=pow(2,*(arr+i)-1);
            p=(pow(2,*(arr+i))-1);
            sum=m*p;
            if(isprime(m)==1 || isprime(p)==1)
            {
                sum=m*p;
                if(sum<pow(2,33))
                    printf("Yes\n");
            }
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    free(arr);
    return 0;
}*/

#include<stdio.h>
#include<math.h>

int isprime(int n)
{
    int i,count=0;
    for(i=2; i<n; i++)
        if(!(n%i))
            ++count;
    if(count==0)
        return 1;
}

int main()
{
    long long int n,i,sum,m,p;
    int *arr;
    scanf("%lld,",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d,",arr+i);
    for(i=0; i<n; i++)
    {
        if(*(arr+i)<20 && isprime(*(arr+i))==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
