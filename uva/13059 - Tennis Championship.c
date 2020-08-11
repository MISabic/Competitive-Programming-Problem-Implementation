#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    char arr[1000000];
    int len,k,l,n,i;
    while(scanf("%s",&arr)==1)
    {
        n=0;
        if(strcmp(arr,"1")==0)
            break;
        else
        {
            len=strlen(arr);
            l=len;
            k=(arr[--l]-'0');
            while(1)
            {
                if(k>1)
                {
                    arr[l]=(k-1)+'0';
                    break;
                }
                else if(k==1)
                {
                    arr[l]='0';
                    break;
                }
                else
                {
                    arr[l]='9';
                    n=1;
                }
                k=(arr[--l]-'0');
            }
            for(i=0; i<len; i++)
                if(arr[i]!='0')
                {
                    printf("%s\n",&arr[i]);
                    break;
                }
        }
    }
    return 0;
}
