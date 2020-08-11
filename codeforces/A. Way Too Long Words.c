#include<stdio.h>
#include<string.h>

int main()
{
    char arr[105];
    int len,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",arr);
        len=strlen(arr);
        (len>10)?printf("%c%d%c\n",arr[0],len-2,arr[len-1]):printf("%s\n",arr);
    }
    return 0;
}
