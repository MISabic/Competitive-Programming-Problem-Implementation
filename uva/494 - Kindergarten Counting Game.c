#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int count,len,i;
    char arr[1000000],*token,ch[5]=" \t";
    while(gets(arr))
    {
        count=0;
        len=strlen(arr);
        for(i=0; i<len; i++)
        {
            if(isalpha(arr[i]) && !isalpha(arr[i+1]))
                ++count;
        }
        printf("%d\n",count);
    }
    return 0;
}
