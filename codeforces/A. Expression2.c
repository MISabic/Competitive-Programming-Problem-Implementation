#include<stdio.h>

int main()
{
    int a,b,c,i,j,sum,max,k;
    char arr[4]={'+','-','*','/'};
    while(scanf("%d %d %d",&a,&b,&c)==3){
        max=-99999999;
        for(i=0; i<4; i++,sum=0){
            if(arr[i]=='+') sum=a+b;
            else if(arr[i]=='-') sum=a-b;
            else if(arr[i]=='*') sum=a*b;
            else if(arr[i]=='/') sum=a/b;
            k=sum;
            for(j=0; j<4; j++,sum=k){
                if(arr[j]=='+') sum=sum+c;
                else if(arr[j]=='-') sum=sum-c;
                else if(arr[j]=='*') sum=sum*c;
                else if(arr[j]=='/') sum=sum/c;
                if(sum>max) max=sum;
            }
        }
        for(i=2; i<=3; i++,sum=0){
            if(arr[i]=='*') sum=(b+c)*a;
            else if(arr[i]=='/') sum=(b+c)/a;
            if(sum>max) max=sum;
        }
        printf("%d\n",max);
    }
    return 0;
}
