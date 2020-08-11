#include<stdio.h>
#include<string.h>

int main()
{
    char arr[105];
    int t,i,len,flag=0,trace;
    scanf("%d",&t);
    while(t--){
        trace=0;
        if(flag==0){
            getc(stdin);
            flag=1;
        }
        gets(arr);
        len=strlen(arr);
        for(i=0; i<len; i++)
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            trace=1;
            break;
        }
        if(trace==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
