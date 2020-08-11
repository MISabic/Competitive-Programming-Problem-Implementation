/*#include<stdio.h>
#include<string.h>

int stringSort(const void *a, const void *b)
{
    return (strcmp((char *)a,(char *)b));
}

int main()
{
    char word[5000][200],ch,temp[200];
    int i=0,j=0,n=0;

    //while(scanf("%s",&ch[i++]))
    //{
      //  if(ph=isalpha(getchar())=='\n')
        //    continue;
    //for(j=0; j<=i; j++)
      //  printf("%s\n",ch[j]);
    //}
//
    while((ch=getchar())!=EOF)
    {
        //printf("\t%c\n",ch);
        for(; ; ch=getchar())
        {
            //printf("\t%c\n",ch);
            //if(ispunct(ch) || isdigit(ch))
              //  break;
            if(isalpha(ch))
            {
                word[i][j++]=tolower(ch);
                //printf("%c\n",word[i][j-1]);
            }
            else if(!isalpha(ch) || ch=='\n')
            {
                //printf("\t%c\n",word[i][j-1]);
                word[i][j]='\0';
                break;
            }
            //printf("%d %d\n",i,j);
        }
        if(strcmp(word[i],"\0")==0)
           ;
        else
            i++;
        //i++;
        j=0;
    }
    //printf("\t\t%s\n",word[i-1]);
    //printf("%d\n",i);
    //for(n=0; n<i; n++)
      //  printf("%s\n",word[n]);
    for(n=0; n<i; n++)
    {
        //printf("\t%s\n",word[n]);
        for(j=n+1; j<i; j++)
        {
            if(strcmp(word[n],word[j])==0)
            {
                strcpy(word[n],word[i-1]);
                //printf("\t\t%s\n",word[i]);
                --i;
                --n;
            }
        }
    }
    //for(n=0; n<i; n++)
        //printf("%s\n",word[n]);
    qsort(word,i,sizeof(word[0]),stringSort);
    for(n=0; n<i; n++)
    {
        printf("%s\n",word[n]);
    }
}*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char word[50000][225];

int stringSort(const void *a, const void *b)
{
    return (strcmp((char *)a,(char *)b));
}

int main()
{
    char ch,temp[225];
    int i=0,j=0,n=0;
    while((ch=getchar())!=EOF)
    {
        for(; ; ch=getchar())
        {
            if(ch==NULL)
                break;
            if(isalpha(ch))
                word[i][j++]=tolower(ch);
            else if(!isalpha(ch) || ch=='\n')
            {
                word[i][j]='\0';
                break;
            }
        }
        if(strcmp(word[i],"\0")==0)
           ;
        else
            i++;
        j=0;
    }
    for(n=0; n<i; n++)
    {
        for(j=n+1; j<i; j++)
        {
            if(strcmp(word[n],word[j])==0)
            {
                strcpy(word[n],word[i-1]);
                --i;
                --n;
            }
        }
    }
    qsort(word,i,sizeof(word[0]),stringSort);
    for(n=0; n<i; n++)
        printf("%s\n",word[n]);
    return 0;
}

