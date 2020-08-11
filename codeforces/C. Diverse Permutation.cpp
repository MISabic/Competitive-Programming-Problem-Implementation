#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main()
{
    int n,k,i;
    while(scanf("%d %d",&n,&k)==2){
        for(i=1; i<=(n-k); i++){
            printf("%d ",i);
        }
        int flag=0,j=n;
        while(1){
            if(flag==0){
                printf("%d ",j);
                --j;
                flag=1;
            }
            else{
                printf("%d ",i);
                ++i;
                flag=0;
            }
            if(i>j){
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
