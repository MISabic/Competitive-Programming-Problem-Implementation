#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    char arr[1111][1111];
    int n,m;
    while(scanf("%d %d",&n,&m)==2){
        int c=0;
        for(int i=0; i<n; i++){
            scanf("%s",&arr[i]);
            for(int j=0; j<m; j++){
                if(arr[i][j]=='*')
                    ++c;
            }
        }
        if(c==0){
            printf("YES\n1 1\n");
            continue;
        }
        int flag=0,k1,k2,sum=0,row[1111],col[1111],p=0,q=0;
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=0; j<m; j++){
                if(arr[i][j]=='*')
                    ++sum;
            }
            row[p++]=sum;
            sum=0;
        }
        for(int j=0; j<m; j++){
            sum=0;
            for(int i=0; i<n; i++){
                if(arr[i][j]=='*')
                    ++sum;
            }
            col[q++]=sum;
            sum=0;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((row[i]+col[j]==c+1 && arr[i][j]=='*') || (row[i]+col[j]==c && arr[i][j]=='.')){
                    printf("YES\n");
                    printf("%d %d\n",i+1,j+1);
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==0){
            printf("NO\n");
        }
    }
    return 0;
}
