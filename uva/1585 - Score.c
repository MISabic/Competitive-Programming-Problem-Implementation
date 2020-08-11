#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,i,count,found;
    char arr[100];
    scanf("%d",&t);
    while(t--)
    {
        count=0,found=0;
        scanf("%s",&arr);
        n=strlen(arr);
        for(i=0; i<n; i++)
        {
            if(arr[i]=='O')
                count+=found++;
            else
            {
                if(arr[i-1]=='O')
                    count+=found;
                found=0;
            }
        }
        count+=found;
        printf("%d\n",count);
    }
    return 0;
}
