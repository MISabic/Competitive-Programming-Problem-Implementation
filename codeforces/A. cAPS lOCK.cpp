#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[105];
    int len;
    while(scanf("%s",arr)==1){
        len=strlen(arr);
        int c=0;
        for(int i=0; i<len; i++){
            if(arr[i]>90) ++c;
        }
        if(c==1 && arr[0]!=toupper(arr[0])){
            printf("%c",toupper(arr[0]));
            for(int i=1; i<len; i++) printf("%c",tolower(arr[i]));
        }
        else if(c==0){
            for(int i=0; i<len; i++) printf("%c",tolower(arr[i]));
        }
        else
            printf("%s",arr);
        printf("\n");
    }
    return 0;
}
