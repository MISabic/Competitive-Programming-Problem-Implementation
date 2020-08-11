#include<stdio.h>
#include<stdin.h>

int main()
{
    int i,n,j,num,count=5,found=0,gum=0,mum=0;
    char ch,ph,*arr[20]={"n a r u t o","s a s u k e","g u y","o b i t o","j i r a i y a","r o c k l e e","i t a c h i","i r u k a","n e j i","k a k a s h i","m i n a t o"};
    num=time(NULL)%11;
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
    while(strcmp(crr,arr[num])!=0)
    {
        ch=getchar();
        if(ispunct(ch) || isdigit(ch))
            printf("Please enter any alphabet.\n");
        else if(isalpha(ch) && count>0)
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
            {
                printf("Congratulations! The word is \"%s\".\n",arr[num]);
                break;
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
                printf("Sorry, you are hanged! The word is \"%s\".\n",arr[num]);
                break;
            }
            else
            {
                printf("Number of lives : %d\n",--count);
                printf("Guess a letter in the word %s\n",crr);
            }
            found=gum=mum=0;
        }
        }
    }
    printf("\nDo you wanna play again(Y/N)?\n");
    ph=getche();
    if(tolower(ph)=='y')
    {
        system("cls");
        main();
    }
    else if(tolower(ph)=='n')
        exit(1);
}
