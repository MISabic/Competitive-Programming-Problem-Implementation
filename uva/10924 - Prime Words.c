#include<stdio.h>
#include<string.h>
#include<math.h>

int prime(int n)
{
    int i;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(i=3; i<=sqrt(n); i+=2)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    char arr[1000000];
    int i,len,count=0;
    while(gets(arr))
    {
        count=0;
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            if(arr[i]>=65 && arr[i]<=90)
                count+=arr[i]-38;
            if(arr[i]>=97 && arr[i]<=122)
                count+=arr[i]-96;
        }
        if(prime(count)==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
