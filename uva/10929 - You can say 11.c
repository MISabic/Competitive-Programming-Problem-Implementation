#include<stdio.h>
#include<string.h>

int main()
{
    char arr[10000],crr[10000];
    int n,i,p,q;
    while(scanf("%s",arr)==1)
    {
        if(strcmp(arr,"0")==0)
            break;
        n=strlen(arr);
        p=(arr[0]-'0');
        for(i=1; i<n; i++)
        {
            p=p*10+arr[i]-'0';
            p=p%11;
        }
        if(p==0)
            printf("%s is a multiple of 11.\n",arr);
        else
            printf("%s is not a multiple of 11.\n",arr);
    }
    return 0;
}
