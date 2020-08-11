#include<stdio.h>

char *strrev(char *s)
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
    char arr[255];
    gets(arr);
    printf("%s",strrev(arr));
}
