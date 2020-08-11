#include<cstdio>
#include<cstring>

int main()
{
    char arr[105][105];
    int c=0,k=0;
    memset(arr,' ',sizeof(arr));
    while(gets(arr[k])!=NULL){
        int len=strlen(arr[k]);
        arr[k++][len]=' ';
        if(len>c) c=len;
    }
    for(int i=0; i<c; i++){
        for(int j=k-1; j>=0; j--)
            printf("%c",arr[j][i]);
        printf("\n");
    }
    return 0;
}

