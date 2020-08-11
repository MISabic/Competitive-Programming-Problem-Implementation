#include<stdio.h>
#include<string.h>

int main()
{
    int i,len;
    char arr[1000000];
    while(gets(arr))
    {
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            printf("%c",arr[i]-7);
        }
        printf("\n");
    }
    return 0;
}
