#include<stdio.h>
#include<string.h>

int main()
{
    char arr[1000000],crr[1000000];
    long int i=0,j=0,a,b,count=0;
    while(scanf("%s %s",arr,crr)!=EOF)
    {
        a=strlen(arr);
        b=strlen(crr);
        while(i!=a)
        {
            for(j; j<b; j++)
            {
                if(arr[i]==crr[j])
                {
                    count++;
                    break;
                }
            }
            j++;
            i++;
        }
        if(count==a)
            printf("Yes\n");
        else
            printf("No\n");
        count=j=i=0;
        /** to start j from 0
         *  to start another word, i=0
         */
    }
    return 0;
}
