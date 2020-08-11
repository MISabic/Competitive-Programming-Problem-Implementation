#include<stdio.h>
#include<string.h>

int main()
{
    char word[100];
    int n,i,a=0,b=0,c=0,d=0;
    while(scanf("%s",word)!=EOF)
    {
        n=strlen(word);
        for(i=0; i<n; i++)
        {
            if(word[i]==word[i-1])
                continue;
            if(word[i]=='B' || word[i]=='F' || word[i]=='P' || word[i]=='V')
            {
                if(a==0)
                    printf("1");
                a++;
                b=c=d=0;
            }
            else if(word[i]=='C' || word[i]=='G' || word[i]=='J' || word[i]=='K' || word[i]=='Q' || word[i]=='S' || word[i]=='X' || word[i]=='Z')
            {
                if(b==0)
                    printf("2");
                b++;
                a=c=d=0;
            }
            else if(word[i]=='D' || word[i]=='T')
            {
                if(c==0)
                    printf("3");
                c++;
                a=b=d=0;
            }
            else if(word[i]=='L')
            {
                printf("4");
                a=b=c=d=0;
            }
            else if(word[i]=='M' || word[i]=='N')
            {
                if(d==0)
                    printf("5");
                d++;
                a=b=c=0;
            }
            else if(word[i]=='R')
            {
                printf("6");
                a=b=c=d=0;
            }
            else
                a=b=c=d=0;
        }
        a=b=c=d=0;
        printf("\n");
    }
    return 0;
}
