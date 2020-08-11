#include<stdio.h>
#include<string.h>

int main()
{
    int t,len,i,count,found;
    char arr[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",arr);
        count=found=0;
        len=strlen(arr);
        if(len==5)
            printf("3\n");
        else
        {
            if(arr[0]=='o' && arr[1]=='n' || arr[0]=='o' && arr[2]=='e' || arr[1]=='n' && arr[2]=='e')
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
