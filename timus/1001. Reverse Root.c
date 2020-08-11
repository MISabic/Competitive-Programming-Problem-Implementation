#include<stdio.h>
#include<string.h>
#include<math.h>

long long int power(long long int i)
{
    long long int j,res=1;
    for(j=1; j<=i; j++)
        res*=10;
    return res;
}

int main()
{
    long long int i,j,len,count,keep,po,track=0,x=0;
    double root[128*1024];
    char arr[50],brr[50];
    while(scanf("%s",arr)!=EOF)
    {
        ++x;
        j=0;
        len=strlen(arr);
        count=arr[len-1]-'0';
        for(i=len-2; i>=0; i--)
        {
            keep=arr[i]-'0';
            po=power(j++);
            count+=(keep*power(j));
        }
        root[track++]=sqrt(count);
    }
    for(i=x-1; i>=0; i--)
        printf("%.4f\n",root[i]);
    return 0;
}
