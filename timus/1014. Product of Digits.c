#include<stdio.h>
#include<string.h>

char *strrev(char *s)
{
    char *real,*forward,temp;
    real=s;
    forward=s;
    while(*s)
        s++;
    while(forward<s)
    {
        temp = *(--s);
        *s = *forward;
        *forward++ = temp;
    }
    return real;
}

int main()
{
    int n,i,j,k;
    char arr[25];
    while(scanf("%d",&n)==1){
        if(n==0){
            printf("10\n");
            continue;
        }
        if(n==1){
            printf("1\n");
            continue;
        }
        k=0;
        for(i=9; i>=2; i--){
            if(n%i==0){
                while(n%i==0){
                    arr[k++]=i+'0';
                    n=n/i;
                }
            }
        }
        arr[k]='\0';
        if(n>9) printf("-1\n");
        else printf("%s\n",strrev(arr));
    }
    return 0;
}
