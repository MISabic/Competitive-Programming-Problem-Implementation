#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int charSort(const char *a, const char *b)
{
    return (*a-*b);
}

int main()
{
    int i,j,len,keepcon,count,found,flag=0;
    char arr[1000000],keepch[1000000];
    while(gets(arr)!=NULL)
    {
        j=found=keepcon=0;
        len=strlen(arr);
        qsort(arr, len, sizeof(arr[0]), (int (*)(const void*, const void*))charSort);
        arr[len]='-';
        arr[len+1]='\0';
        for(i=0; i<len+2; i++)
        {
            count=1;
            if(isalpha(arr[i]))
            {
                for(j=i+1; j<len+2; j++)
                {
                    if(arr[j]==arr[j-1])
                        ++count;
                    else
                    {
                        i=j-1;
                        if(count>keepcon)
                        {
                            keepch[0]=arr[i];
                            keepch[1]='\0';
                            found=0;
                            keepcon=count;
                        }
                        else if(count==keepcon)
                        {
                            keepch[++found]=arr[i];
                        }
                        keepch[found+1]='\0';
                        break;
                    }
                }
            }
        }
        printf("%s %d\n",keepch,keepcon);
    }
    return 0;
}
