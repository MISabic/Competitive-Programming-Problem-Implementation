#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,a,b,sum,total=999999999LL,x,k=0;
    char arr[100],brr[100];
    scanf("%d",&n);
    while(n--){
        scanf("%s",arr);
        sum=x=0;
        for(i=0; i<4; i++){
            scanf(" %d %d",&a,&b);
            if(b!=0){
                sum+=b+((a-1)*20);
                ++x;
            }
        }
        if(x>=k && sum<total){
            strcpy(brr,arr);
            k=x;
            total=sum;
        }
    }
    printf("%s %d %d\n",brr,k,total);
    return 0;
}
