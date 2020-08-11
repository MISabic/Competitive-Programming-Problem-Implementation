/*#include<stdio.h>
#include<string.h>

int re(int n)
{
    int r=0;
    while(n!=0){
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}

int digcount(int i)
{
    int c=0;
    while(i!=0){
        i=i/10;
        ++c;
    }
    return c;
}

int main()
{
    int n,i,j=10,k,rev,c=0;
    char arr[1005];
    memset(arr,'0',sizeof(arr));
    for(i=10; i<=1000 && j<=1000; i+=10){
        k=re(i);
        c=0;
        while(k!=0){
            arr[j++]=(k%10)+'0';
            k=k/10;
            ++c;
        }
        j+=(digcount(i)-c)+(9*digcount(i));
    }
    j=1;
    for(i=1; i<=1000 && j<=1000; i++){
        if(!(i%10)){
            j+=digcount(i);
            continue;
        }
        k=re(i);
        while(k!=0){
            arr[j++]=(k%10)+'0';
            k=k/10;
        }
    }
    while(scanf("%d",&n)==1)
        printf("%c\n",arr[n]);
    return 0;
}*/


#include <stdio.h>
#include <string.h>

char str[1000010], lol[100];

int main(){
    int i, j, k, n;
    str[0] = 0;
    for (i = 1; i <= 10000; i++){
        sprintf(lol, "%d", i);
        strcat(str, lol);
    }

    while (scanf("%d", &n) != EOF)
        printf("%c\n", str[n - 1]);

    return 0;
}
