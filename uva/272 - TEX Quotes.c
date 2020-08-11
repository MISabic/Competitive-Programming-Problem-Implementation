/*#include<stdio.h>
#include<string.h>

int main()
{
    int i,pos,flag=0;
    char arr[1001000],*ret;
    while(fgets(arr , 1001000 , stdin))
    {
        while(1)
        {
            ret=strchr(arr,'"');
            if(ret==0)
                break;
            if(flag==0)
            {
                pos=ret-arr;
                arr[pos]='`';
                memmove(&arr[pos+1], &arr[pos], strlen(arr)+1);
                flag=1;
            }
            else
            {
                pos=ret-arr;
                arr[pos]='\'';
                memmove(&arr[pos+1], &arr[pos], strlen(arr)+1);
                flag=0;
            }
        }
        printf("%s",arr);
    }
    return 0;
}
*/



#include<stdio.h>
#include<string.h>

int main()
{
    int i,pos,flag=0,count=0;
    char arr[1001000],brr[1001000],*ret;
    while(fgets(arr , 1001000 , stdin))
    {
        count=0;
        for(i=0; i<strlen(arr); i++)
        {
            if(arr[i]=='"' && flag==0)
            {
                brr[count++]='`';
                brr[count++]='`';
                flag=1;
            }
            else if(arr[i]=='"' && flag==1)
            {
                brr[count++]='\'';
                brr[count++]='\'';
                flag=0;
            }
            else
                brr[count++]=arr[i];
        }
        brr[count]='\0';
        printf("%s",brr);
    }
    return 0;
}
