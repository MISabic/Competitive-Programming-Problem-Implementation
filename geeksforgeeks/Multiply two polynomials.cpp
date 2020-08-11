#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int t,m,n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&m,&n);
        int a[m+5],b[n+5];
        for(int j=0; j<m; j++){
            scanf("%d",&a[j]);
        }
        for(int j=0; j<n; j++){
            scanf("%d",&b[j]);
        }
        int res[m+n+5];
        memset(res,0,sizeof(res));
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                res[j+k]+=a[k]*b[j];
            }
        }
        for(int j=0; j<=m+n-2; j++){
            printf("%d ",res[j]);
        }
        printf("\n");
    }
    return 0;
}
