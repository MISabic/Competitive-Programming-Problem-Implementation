#include<stdio.h>
#include<string.h>

int main()
{
    char word[1000000];
    long long int n,i;
    gets(word);
    n=strlen(word);
    for(i=0; i<n; i++)
    {
        if(tolower(word[i])==']')
            printf("p");
        else if(tolower(word[i])=='[')
            printf("o");
        else if(tolower(word[i])=='p')
            printf("i");
        else if(tolower(word[i])=='o')
            printf("u");
        else if(tolower(word[i])=='i')
            printf("y");
        else if(tolower(word[i])=='u')
            printf("t");
        else if(tolower(word[i])=='y')
            printf("r");
        else if(tolower(word[i])=='t')
            printf("e");
        else if(tolower(word[i])=='r')
            printf("w");
        else if(tolower(word[i])=='e')
            printf("q");
        else if(tolower(word[i])=='\'')
            printf("l");
        else if(tolower(word[i])==';')
            printf("k");
        else if(tolower(word[i])=='l')
            printf("j");
        else if(tolower(word[i])=='k')
            printf("h");
        else if(tolower(word[i])=='j')
            printf("g");
        else if(tolower(word[i])=='h')
            printf("f");
        else if(tolower(word[i])=='g')
            printf("d");
        else if(tolower(word[i])=='f')
            printf("s");
        else if(tolower(word[i])=='d')
            printf("a");
        else if(tolower(word[i])=='.')
            printf("m");
        else if(tolower(word[i])==',')
            printf("n");
        else if(tolower(word[i])=='m')
            printf("b");
        else if(tolower(word[i])=='n')
            printf("v");
        else if(tolower(word[i])=='b')
            printf("c");
        else if(tolower(word[i])=='v')
            printf("x");
        else if(tolower(word[i])=='c')
            printf("z");
        else
            printf("%c",word[i]);
    }
    printf("\n");
    return 0;
}
