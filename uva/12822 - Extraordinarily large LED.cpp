#include<bits/stdc++.h>
using namespace std;

int co[10]={6,2,5,5,4,5,6,3,7,6};

int led(int n)
{
    int k=0;
    if(n==0) return k=6;
    while(n!=0){
        k+=co[n%10];
        n/=10;
    }
    return k;
}

int main()
{
    int h,m,s,k,score,unit=0,s1=0,s2=0,c=0;
    char arr[20],brr[20];
    while(scanf("%s %d:%d:%d",arr,&h,&m,&s)==4){
        if(strcmp(arr,"END")==0){
            int p=h*60*60+m*60+s;
            unit+=(p-k)*led(s1)+(p-k)*led(s2);
            printf("Case %d: %d\n",++c,unit);
            unit=0,s1=0,s2=0;
        }
        if(strcmp(arr,"START")==0){
            k=h*60*60+m*60+s;
        }
        if(strcmp(arr,"SCORE")==0){
            scanf("%s %d",brr,&score);
            if(strcmp(brr,"home")==0){
                int p=h*60*60+m*60+s;
                unit+=(p-k)*led(s1)+(p-k)*led(s2);
                k=p;
                s1+=score;
            }
            else{
                int p=h*60*60+m*60+s;
                unit+=(p-k)*led(s1)+(p-k)*led(s2);
                k=p;
                s2+=score;
            }
        }
    }
    return 0;
}
