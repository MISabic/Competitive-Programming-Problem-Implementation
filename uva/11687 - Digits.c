/*#include <cstdio>
#include <cstring>

int recurse(int length, int count)
{
    //printf("%d\n",count);
    if (length == 1)
        return count + 1;

    int newLength(0), oldLength(length);

    for (; length; length /= 10, ++newLength)
    {
        printf("%d\n",length);
    }
    printf("%d\n",count);
    return recurse(newLength, count + 1);
}


int main()
{
    char input[1000010];

    while (scanf("%s", input), input[0] != 'E')
    {
        if (strlen(input) == 1 && input[0] == '1')
            printf("1\n");
        else
            printf("%d\n", recurse(strlen(input), 1));
    }
}*/


#include<stdio.h>
#include<string.h>

int main()
{
    char arr[1000000],n;
    while(scanf("%s",arr), arr[0]!='E')
    {
        n=strlen(arr);
        if(arr[0]=='1' && arr[1]=='\0')
            printf("1\n");
        else if(n==1)
            printf("2\n");
        else if(n<10)
            printf("3\n");
        else
            printf("4\n");
    }
    return 0;
}
