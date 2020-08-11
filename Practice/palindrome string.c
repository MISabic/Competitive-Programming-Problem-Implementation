#include<stdio.h>

int main()
{
    int i,n,j=0;
    char arr[100],crr[100];
    scanf("%d",&n);
    gets(arr);
    for(i=0; i<n; i++)
    {
        gets(arr);
        for(i=strlen(arr)-1; i>=0; i--)
            crr[j++]=arr[i];
        crr[j]='\0';
        if(strcmp(arr,crr)==0)
            printf("Yes\n");
        else
            printf("No\n");
        j=0;
    }
}
