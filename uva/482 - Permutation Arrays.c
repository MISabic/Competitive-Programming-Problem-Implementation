#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a,b) (a<b ? a:b)

typedef struct
{
    int index;
    char innum[60];
}perarr;
perarr srr[100000];

char arr[100000];

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,i,j=0,len1,len2,flag=0,keep;
    char ch[2]=" ",*token;
    scanf("%d",&t);
    getchar ();
    while(t--)
    {
        j=0;
        gets(arr);
        gets(arr);
        len1=strlen(arr);
        token = strtok(arr, ch);
        while( token != NULL)
        {
            srr[j++].index=atoi(token);
            token = strtok(NULL, ch);
        }
        keep=j;
        j=0;
        gets(arr);
        len2=strlen(arr);
        token = strtok(arr, ch);
        while( token != NULL)
        {
            strcpy(srr[j++].innum,token);
            token = strtok(NULL, ch);
        }
        if(flag==1)
            printf("\n");
        flag=1;
        qsort(srr, min(keep,j), sizeof(perarr), (int (*)(const void*, const void*))intSort);
        for(i=0; i<j; i++)
        {
            printf("%s\n",srr[i].innum);
        }
    }
    return 0;
}
