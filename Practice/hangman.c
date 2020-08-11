#include<stdio.h>

int main()
{
    int i,n,count=5,found=0,gum=0,mum=0;
    char ch,arr[]={"a p p l e"},crr[]={"_ _ _ _ _"};
    printf("Number of lives : 5\n");
    printf("Guess a letter in the word _ _ _ _ _\n");
    n=strlen(arr);
    A:
    scanf("%c",&ch);
    if(isalpha(ch) && count>0)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]==ch || arr[i]==crr[i] && !isspace(arr[i]))
                found++;
            if(arr[i]!=ch && !isspace(arr[i]))
                gum++;
            if(isspace(arr[i]))
                mum++;
        }
    if(found!=0 && gum!=n-mum)
    {
        for(i=0; i<n; i+=2)
            if(i%2!=0)
                crr[i]=' ';
            else if(arr[i]==ch)
                crr[i]=ch;
            else if(arr[i]!=crr[i])
                crr[i]='_';

        if(strcmp(crr,arr)==0 && count>0 && found==n-mum)
        {
            printf("Congratulations! The word is \"apple\".");
            exit(1);
        }
        else
        {
            printf("Number of lives : %d\n",count);
            printf("Guess a letter in the word %s\n",crr);
        }
        found=gum=mum=0;
    }
    else if(gum==n-mum)
    {
        if(count==1)
        {
            printf("Sorry, you are hanged! The word is \"apple\".");
            exit(1);
        }
        else
        {
            printf("Number of lives : %d\n",--count);
            printf("Guess a letter in the word %s\n",crr);
        }
        found=gum=mum=0;
    }
    }
        goto A;
}
