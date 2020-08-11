#include<cstdio>

int res[22][524290],check[22][524290];

int main()
{
    int t,d,k,n,flag;
    for(int i=1; i<=524288; i++){
        d=2,n=1;
        while(d<21){
            if(check[d][n]==0){
                check[d][n]=1;
                res[d][i]=n*2;
                n=n*2;
            }
            else{
                check[d][n]=0;
                res[d][i]=n*2+1;
                n=n*2+1;
            }
            ++d;
        }
    }
    while(scanf("%d",&t) && t!=-1){
        for(int i=0; i<t; i++){
            scanf("%d %d",&d,&k);
            printf("%d\n",res[d][k]);
        }
    }
    return 0;
}
