#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[1050];
    while(scanf("%d",&n)==1){
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        int f=0,k;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                k=(arr[j]-arr[i]);
                if(k<0){
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        if(f==0) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

