#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char arr[10000],ch;
    int i,n,flag=0;
    while(gets(arr))
    {
        if(strcmp(arr,"*")==0)
            break;
        n=strlen(arr);
            ch=tolower(arr[0]);
        for(i=1; i<n; i++)
        {
            if(isspace(arr[i]) && ch!=tolower(arr[i+1]))
            {
                printf("N\n");
                break;
            }
        }
        if(i==n)
            printf("Y\n");
    }
    return 0;
}
