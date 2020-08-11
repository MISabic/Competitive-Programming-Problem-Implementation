#include<stdio.h>

int main()
{
    long long int i=0,j,sum=5,n,l;
    char crr[100],arr[100];
    gets(crr);
    n=strlen(crr);
    while(isdigit(*(crr+n-1))!=NULL)
    {
        if(isalpha(*(crr+n-1)))
            break;
        arr[i++]=*(crr+n-1);
        --n;
    }
    strrev(arr);
    n=atoi(arr);
    printf("%lld",n);
}
