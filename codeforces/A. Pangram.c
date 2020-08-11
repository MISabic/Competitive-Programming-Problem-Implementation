#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n,i,flag,brr[26];
    char arr[105];
    while(scanf("%d %s",&n,arr)==2){
        flag=0;
        memset(brr,0,sizeof(brr));
        for(i=0; i<n; i++)
            brr[toupper(arr[i])-65]++;
        for(i=0; i<26; i++)
            if(brr[i]==0){
                flag=1;
                break;
            }
        if(flag==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
