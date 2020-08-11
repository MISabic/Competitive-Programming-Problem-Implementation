#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    char ch;
    int count;
}num;

int intsort(const void * a, const void * b)
{
    num * x = (num *) a;
    num * y = (num *) b;
    return x->ch - y->ch;
}

int main()
{
    num n1[101],n2[101];
    char arr[10005],brr[10005],ph;
    int len1,len2,i,j,t,track,k1,k2,found,flag;
    while(scanf("%s",arr)==1){
        for(i=0; i<100; i++)
            n1[i].count=0;
        t=0;
        len1=strlen(arr);
        for(i=0; i<len1; i++){
            for(j=0; j<=t; j++){
                if(n1[j].count==0){
                    n1[j].ch=arr[i];
                    ++n1[j].count;
                    ++t;
                    break;
                }
                else if(arr[i]==n1[j].ch){
                    ++n1[j].count;
                    break;
                }
            }
        }
        qsort(n1,t,sizeof(num),(int (*)(const void*, const void*))intsort);
        k1=t;
        scanf("%s",brr);
        for(i=0; i<100; i++)
            n2[i].count=0;
        t=0;
        len2=strlen(brr);
        for(i=0; i<len2; i++){
            for(j=0; j<=t; j++){
                if(n2[j].count==0){
                    n2[j].ch=brr[i];
                    ++n2[j].count;
                    ++t;
                    break;
                }
                else if(brr[i]==n2[j].ch){
                    ++n2[j].count;
                    break;
                }
            }
        }
        qsort(n2,t,sizeof(num),(int (*)(const void*, const void*))intsort);
        k2=t;
        found=0;
        for(i=0; i<k1; i++){
            flag=0;
            for(j=0; j<k2; j++){
                if(n1[i].ch==n2[j].ch){
                    found+=abs(n1[i].count-n2[j].count);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                found+=n1[i].count;
        }
        for(j=0; j<k2; j++){
            flag=0;
            for(i=0; i<k1; i++){
                if(n1[i].ch==n2[j].ch){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                found+=n2[j].count;
        }
        printf("%d\n",found);
    }
    return 0;
}
