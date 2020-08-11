#include<stdio.h>
#include<string.h>

typedef struct
{
    char ch;
    int count;
}num;

int intsort(const void * a, const void * b)
{
    num * x = (num *) a;
    num * y = (num *) b;
    return x->count - y->count;
}

int main()
{
    num n[101];
    char arr[1111],ph;
    int len,i,j,t,track;
    while(gets(arr)){
        for(i=0; i<100; i++)
            n[i].count=0;
        t=0;
        len=strlen(arr);
        for(i=0; i<len; i++){
            for(j=0; j<=t; j++){
                if(n[j].count==0){
                    n[j].ch=arr[i];
                    ++n[j].count;
                    ++t;
                    break;
                }
                else if(arr[i]==n[j].ch){
                    ++n[j].count;
                    break;
                }
            }
        }
        qsort(n,t,sizeof(num),intsort);
        ph=n[t-1].ch;
        track=n[t-1].count;
        for(i=t-1; i>=0; i--){
            if(n[i].count<track){
                break;
            }
            else if(n[i].ch<ph){
                ph=n[i].ch;
            }
        }
        printf("%c %d\n",ph,track);
    }
    return 0;
}
