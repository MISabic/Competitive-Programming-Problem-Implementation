#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void patcheck(char *pat, int *lps, int len)
{
    int i=1, j=0;
    lps[0]=0;
    while(i<len){
        if(pat[i]==pat[j]){
            ++j;
            lps[i]=j;
            ++i;
        }
        else{
            if(j!=0)
                j=lps[j-1];
            else{
                lps[i]=0;
                ++i;
            }
        }
    }
}

int kmp(char *txt, char *pat)
{
    int i=0,j=0,m,n,count=0,*lps;
    m=strlen(txt);
    n=strlen(pat);
    lps=(int*)malloc(sizeof(pat)*n);
    patcheck(pat,lps,n);
    while(i<m){
        if(pat[j]==txt[i]){
            ++i;
            ++j;
        }
        if(j==n){
            ++count;
            j=lps[j-1];
        }
        else if(txt[i]!=pat[j]){
            if(j!=0)
                j=lps[j-1];
            else
                ++i;
        }
    }
    return count;
}

int main()
{
    int t;
    char txt[1000005],pat[10005];
    scanf("%d",&t);
    while(t--){
        scanf("%s %s",pat,txt);
        printf("%d\n",kmp(txt,pat));
    }
}



/*#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,c,flag,len1,len2,k;
    char arr[10005],brr[1000005];
    scanf("%d",&t);
    while(t--){
        scanf("%s %s",arr,brr);
        len1=strlen(arr);
        len2=strlen(brr);
        c=0;
        for(i=0; i<len2; i++){
            flag=0;
            if(brr[i]==arr[0] && brr[i+len1/2]==arr[len1/2] && brr[i+len1-1]==arr[len1-1]){
                k=i;
                for(j=0; j<len1; j++){
                    if(brr[k++]!=arr[j]){
                        flag=1;
                        break;
                    }
                }
                c+=(flag!=1);
            }
        }
        printf("%d\n",c);
    }
}*/
