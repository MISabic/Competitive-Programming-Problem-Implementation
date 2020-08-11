#include<stdio.h>

int main()
{
    char arr[100050];
    int n,num[100050],i,c;
    while(scanf("%d",&n)==1){
        scanf("%s",&arr[1]);
        for(i=1; i<=n; i++)
            scanf("%d",&num[i]);
        i=1,c=0;
        while(1){
            if(c==100000){
                printf("INFINITE\n");
                break;
            }
            if(arr[i]=='<'){
                if(i-num[i]<1){
                    printf("FINITE\n");
                    break;
                }
                if(arr[i]=='<' && arr[i-num[i]]=='>' && num[i]==num[i-num[i]]){
                    printf("INFINITE\n");
                    break;
                }
                i=i-num[i];
            }
            else if(arr[i]=='>'){
                if(i+num[i]>n){
                    printf("FINITE\n");
                    break;
                }
                if(arr[i]=='>' && arr[i+num[i]]=='<' && num[i]==num[i+num[i]]){
                    printf("INFINITE\n");
                    break;
                }
                i=i+num[i];
            }
            ++c;
        }
    }
    return 0;
}
