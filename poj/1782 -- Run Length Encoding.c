#include<stdio.h>
#include<string.h>

int main()
{
    char arr[1000000],brr[1000000];
    int i,len,k,j,l,rem;
    while(gets(arr)){
        k=1,j=0;
        len=strlen(arr);
        for(i=0; i<len; i++){
            if(arr[i]==arr[i+1]){
                ++k;
            }
            else{
                brr[j++]=k+'0',brr[j++]=arr[i];
                //printf("++%c\n",k+'0');
                k=1;
            }
        }
        brr[j]='\0';
        len=strlen(brr);//printf("**%s\n",brr);
        for(i=0; i<len; i+=2){
            if(brr[i]=='1'){
                printf("1");
                for(j=i; j<len; j+=2){
                    if(brr[j]=='1'){
                        if(brr[j+1]=='1') printf("11");
                        else printf("%c",brr[j+1]);
                    }
                    else break;
                }
                printf("1");
                i=j-2;
            }
            else{
                printf("%c%c",brr[i],brr[i+1]);
            }//printf("++%d\n",i);
        }
        printf("\n");
    }
    return 0;
}
