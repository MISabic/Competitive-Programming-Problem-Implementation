#include<stdio.h>

int main()
{
    int n,i,j,k,p,l,mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char arr[7][15]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    while(scanf("%d",&n)==1 && n!=-1){
        k=n+1,j=2000;
        for(i=2000; i<=9999; i++){
            if(k<=365) break;
            if(i%4==0 && i%100!=0 || i%400==0) k-=366;
            else k-=365;
            ++j;
        }
        p=k,l=0;
        (j%4==0 && j%100!=0 || j%400==0) ? (mon[1]=29) : (mon[1]=28);
        for(i=0; i<12; i++){
            if(p<mon[i]) break;
            p-=mon[i];
            ++l;
        }
        if(p==0 && l==0) printf("%d-12-%02d %s\n",j-1,mon[i],arr[n%7]);
        else if(p==0) printf("%d-%02d-%02d %s\n",j,l,mon[i-1],arr[n%7]);
        else printf("%d-%02d-%02d %s\n",j,l+1,p,arr[n%7]);
    }
    return 0;
}
