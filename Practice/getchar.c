#include <stdio.h>

int main ()
{
char c,total=0;

    puts ("Enter Input : ");
    for(c = getchar(); c != '\n'; c = getchar())
        if(isspace(c))
            break;
        else if(isdigit(c))
            total+=c-'0';

    printf("%d",total);
}
