#include<stdio.h>
#include<stdlib.h>
#define min(a,b) (a<b)?a:b
#define m -1
#define p 999999

typedef struct{
    int index, l, r, lr;
}mov;
mov arr[105],brr[105];

int compare1 (const void * a, const void * b)
{
    mov *movA = (mov *)b;
    mov *movB = (mov *)a;
    return ( movA->lr - movB->lr );
}

int compare2 (const void * a, const void * b)
{
    mov *movA = (mov *)b;
    mov *movB = (mov *)a;
    return ( movA->r - movB->r );
}

int main()
{
    int t,n,i,j,k,flag;
    scanf("%d",&t);
    while(t--){
        flag=0;
        scanf("%d",&n);
        for(i=0; i<n; i++){
            arr[i].index=i;
            scanf("%d",&arr[i].l);
        }
        for(i=0; i<n; i++)
            scanf("%d",&arr[i].r);
        for(i=0; i<n; i++)
            arr[i].lr=arr[i].l*arr[i].r;
        if(n==1){
            printf("1\n");
            continue;
        }
        qsort (arr, n, sizeof(mov), (int (*)(const void*, const void*))compare1);
        if(arr[0].lr!=arr[1].lr){
            printf("%d\n",arr[0].index+1);
            continue;
        }
        arr[n].lr=-1;
        for(i=0; i<n; i++){
            if(arr[i].lr!=arr[i+1].lr){
                brr[i].index=arr[i].index;
                brr[i].r=arr[i].r;
                break;
            }
            else if(arr[i].lr==arr[i+1].lr){
                brr[i].index=arr[i].index;
                brr[i].r=arr[i].r;
            }
        }
        qsort (brr, i+1, sizeof(mov), (int (*)(const void*, const void*))compare2);
        if(brr[0].r!=brr[1].r){
            printf("%d\n",brr[0].index+1);
            continue;
        }
        for(j=0; j<i; j++){
            if(brr[j].r==brr[j+1].r)
                k=min(brr[j].index,brr[j+1].index);
        }
        printf("%d\n",k+1);
    }
    return 0;
}
