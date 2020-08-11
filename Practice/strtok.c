#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int count;
    char arr[1000000],*token,ch[5]=" \t";
    while(gets(arr))
    {
        count=0;
        token = strtok(arr, ch);
        while( token != NULL)
        {
            if(isalpha(token[0]))
                ++count;
            token = strtok(NULL, ch);
        }
        printf("%d\n",count);
    }
    return 0;
}
