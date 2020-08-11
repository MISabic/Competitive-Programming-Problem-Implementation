#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n){
        if(n==1){
            printf("1 = 1\n");
            continue;
        }
        int flag=0;
        if(n<0){
            printf("%d = -1",n);
            n=abs(n);
            flag=1;
        }
        else printf("%d =",n);
        if(n%2==0){
            while(n%2==0){
                n/=2;
                if(flag==0){
                    printf(" 2");
                    flag=1;
                }
                else printf(" x 2");
            }
        }
        int sqrtn=sqrt(n);
        for(int i=3; i<=sqrtn; i+=2){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    if(flag==0){
                        printf(" %d",i);
                        flag=1;
                    }
                    else printf(" x %d",i);
                }
            }
        }
        if(n>1){
            if(flag==0){
                printf(" %d",n);
                flag=1;
            }
            else printf(" x %d",n);
        }
        printf("\n");
    }
    return 0;
}
