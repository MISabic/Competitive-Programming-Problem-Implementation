/*#include<stdio.h>

int main()
{
    char src[1000], rep[100], sea[100];
    gets(src);
    gets(sea);
    gets(rep);
    char temp[1000];
    strcpy(temp,src);
    if(strstr(src,sea)==NULL)
    {
        printf("%s",src);
        exit(1);
    }
    else
    {
        size_t n=strlen(temp);
        size_t m=strlen(strstr(temp,sea));
        size_t p=strlen(sea);
        int count=n-m;
        temp[count]='\0';
        int found=count+p;
        strcat(temp,rep);
        strcat(temp,&src[found]);
        strcpy(src,temp);
        printf("%s\n",src);
    }
}*/
#include<stdio.h>

char *replace(const char src[], const char sea[], const char rep[])
{
    char temp[1000];
    strcpy(temp,src);
    if(strstr(src,sea)==NULL)
    {
        return src;
        exit(1);
    }
    else
    {
        size_t n=strlen(temp);
        size_t m=strlen(strstr(temp,sea));
        size_t p=strlen(sea);
        int count=n-m;
        temp[count]='\0';
        int found=count+p;
        strcat(temp,rep);
        strcat(temp,&src[found]);
        strcpy(src,temp);
        return src;
    }
}

int main()
{
    char *after;
    char arr[100],crr[100],tree[100];
    gets(arr);
    gets(crr);
    gets(tree);
    after=replace(arr, crr, tree);
    strcpy(arr,after);
    printf("%s\n",arr);
}
