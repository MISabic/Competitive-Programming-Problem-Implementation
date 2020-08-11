#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len,keep;
    char arr[1000000];
    while(gets(arr))
    {
        keep=0;
        len=strlen(arr);
        for(i=0; i<=len; i++)
        {
            if(arr[i]==' ' || arr[i]=='\0')
            {
                for(j=i-1; j>=keep; j--)
                    printf("%c",arr[j]);
                if(i!=len)
                    printf(" ");
                keep=i+1;
            }
        }
        printf("\n");
    }
    return 0;
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
    int i,len1,len2,j,flag,count;
    char arr[1000000],ph,*token,ch[2]=" ";
    while((ph=getchar())!=EOF)
    {
        arr[0]=ph;
        gets(&arr[1]);
        j=flag=count=len2=0;
        token = strtok(arr, ch);
        while( token != NULL)
        {
            len2=strlen(token);
            for(i=len2; i>=0; i--)
            {
                if(flag==0)
                {
                    flag=1;
                    continue;
                }
                if(token[i]!='\0')
                    printf("%c",token[i]);
            }
            token = strtok(NULL, ch);
            ++len2;
        }
        printf("\n");
    }
    return 0;
}*/
