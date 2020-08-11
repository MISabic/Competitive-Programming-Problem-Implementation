#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,sr,sc;
    int res[100][100],visited[100][100];
    char arr[100][100];
    while(cin>>n>>m>>sc && n && m && sc){
        memset(res,0,sizeof(res));
        memset(visited,0,sizeof(visited));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        sr=0, --sc;
        visited[sr][sc]=1;
        int flag=0;
        while(1){
            if(arr[sr][sc]=='N'){
                --sr;
                if(sr<0 || sr>=n || sc<0 || sc>=m){
                    printf("%d step(s) to exit\n",res[sr+1][sc]+1);
                    break;
                }
                else{
                    if(visited[sr][sc]!=0){
                        printf("%d step(s) before a loop of %d step(s)\n",res[sr][sc],res[sr+1][sc]+1-res[sr][sc]);
                        break;
                    }
                    else{
                        res[sr][sc]=res[sr+1][sc]+1;
                        visited[sr][sc]=1;
                    }
                }
            }
            else if(arr[sr][sc]=='S'){
                ++sr;
                if(sr<0 || sr>=n || sc<0 || sc>=m){
                    printf("%d step(s) to exit\n",res[sr-1][sc]+1);
                    break;
                }
                else{
                    //if()
                    if(visited[sr][sc]!=0){
                        printf("%d step(s) before a loop of %d step(s)\n",res[sr][sc],res[sr-1][sc]+1-res[sr][sc]);
                        break;
                    }
                    else{
                        res[sr][sc]=res[sr-1][sc]+1;
                        visited[sr][sc]=1;
                    }
                }
            }
            else if(arr[sr][sc]=='E'){
                ++sc;
                if(sr<0 || sr>=n || sc<0 || sc>=m){
                    printf("%d step(s) to exit\n",res[sr][sc-1]+1);
                    break;
                }
                else{
                    if(visited[sr][sc]!=0){
                        printf("%d step(s) before a loop of %d step(s)\n",res[sr][sc],res[sr][sc-1]+1-res[sr][sc]);
                        break;
                    }
                    else{
                        res[sr][sc]=res[sr][sc-1]+1;
                        visited[sr][sc]=1;
                    }
                }
            }
            else if(arr[sr][sc]=='W'){
                --sc;
                if(sr<0 || sr>=n || sc<0 || sc>=m){
                    printf("%d step(s) to exit\n",res[sr][sc+1]+1);
                    break;
                }
                else{
                    if(visited[sr][sc]!=0){
                        printf("%d step(s) before a loop of %d step(s)\n",res[sr][sc],res[sr][sc+1]+1-res[sr][sc]);
                        break;
                    }
                    else{
                        res[sr][sc]=res[sr][sc+1]+1;
                        visited[sr][sc]=1;
                    }
                }
            }
        }
    }
    return 0;
}
