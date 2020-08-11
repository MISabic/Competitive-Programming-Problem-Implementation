/*#include<stdio.h>

int main()
{
    int i,n,count=5,found=0,gum=0;
    char ch,arr[]={"apple"},crr[]={"_____"};
    printf("Number of lives : 5\n");
    printf("Guess a letter in the word _____\n");
    n=strlen(arr);
    A:
    scanf("%c",&ch);
    if(isalpha(ch) && count>0)
    {
        for(i=0; i<n; i++)
        {
           if(arr[i]==ch || arr[i]==crr[i])
                found++;
           if(arr[i]!=ch)
                gum++;
        }
        if(found!=0 && gum!=n)
        {
            for(i=0; i<n; i++)
                if(arr[i]==ch)
                    crr[i]=ch;
                else if(arr[i]!=crr[i])
                    crr[i]='_';

        if(strcmp(crr,arr)==0 && count>0 && found==n)
            printf("Congratulations! The word is \"apple\".");
        else
        {
            printf("Number of lives : %d\n",count);
            printf("Guess a letter in the word %s\n",crr);
        }
        found=gum=0;
    }
    else if(gum==5)
    {
        if(count==1)
            printf("Sorry, you are hanged! The word is \"apple\".");
        else
        {
            printf("Number of lives : %d\n",--count);
            printf("Guess a letter in the word %s\n",crr);
        }
        found=gum=0;
    }
    }
        goto A;
}
*/

#include<stdio.h>

int main()
{
    int i,n,num,count=5,found=0,gum=0,mum=0;
    char ch,*arr[20]={"n a r u t o","s a s u k e","g u y","o b i t o","j i r a i y a","r o c k l e e","g a r a","i r u k a","n e j i","k a k a s h i","m i n a t o"};
    num=srand(time(NULL))%11;
    n=strlen(arr[num]);
    char crr[n];
    for(i=0; i<n; i++)
        if(i%2==0)
        {
            crr[i]='_';
            crr[i+1]='\0';
        }
        else
            crr[i]=' ';
    printf("Number of lives : 5\n");
    printf("Guess a letter in the word %s\n",crr);
    A:
    scanf("%c",&ch);
    if(isalpha(ch) && count>0)
    {
        for(i=0; i<n; i++)
        {
            if(arr[num][i]==ch || arr[num][i]==crr[i] && !isspace(arr[num][i]))
                found++;
            if(arr[num][i]!=ch && !isspace(arr[num][i]))
                gum++;
            if(isspace(arr[num][i]))
                mum++;
        }
    if(found!=0 && gum!=n-mum)
    {
        for(i=0; i<n; i+=2)
            if(i%2!=0)
                crr[i]=' ';
            else if(arr[num][i]==ch)
                crr[i]=ch;
            else if(arr[num][i]!=crr[i])
                crr[i]='_';

        if(strcmp(crr,arr[num])==0 && count>0 && found==n-mum)
            printf("Congratulations! The word is \"%s\".",arr[num]);
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
            printf("Sorry, you are hanged! The word is \"%s\".",arr[num]);
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
