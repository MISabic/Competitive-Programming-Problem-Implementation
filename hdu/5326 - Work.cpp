#include<bits/stdc++.h>
using namespace std;

int arr[105][105];

int dfs()

int main()
{
    int n,k,x,y;
    while(scanf("%d %d",&n,&k)==2){
        for(int i=1; i<n; i++){
            scanf("%d %d",&x,&y);
            arr[x][y]=1;
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++){
                if(arr[i][j]){
                    dfs()
                }
            }
        }
    }
    return 0;
}
