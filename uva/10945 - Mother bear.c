#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *rev(char *s)
{
    char *real,*forward,temp;
    real=s;
    forward=s;
    while(*s)
        s++;
    while(forward<s)
    {
        temp = *(--s);
        *s = *forward;
        *forward++ = temp;
    }
    return real;
}

int main()
{
    int i,len,j;
    char arr[1000000],brr[1000000];
    while(gets(brr))
    {
        j=0;
        if(strcmp(brr,"DONE")==0)
            break;
        len=strlen(brr);
        for(i=0; i<len; i++)
        {
            if(isalpha(brr[i]))
            {
                arr[j++]=tolower(brr[i]);
            }
        }
        arr[j]='\0';
        strcpy(brr,arr);
        if(strcmp(arr,rev(brr))==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
