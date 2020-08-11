#include<bits/stdc++.h>
using namespace std;

int fx[10]={-1,0,1,0,-1,-1,1,1};
int fy[10]={0,-1,0,1,-1,1,-1,1};

bool isValid(int x,int y,int n,int m)
{
    if(x<0 || x>(n-1) || y<0 || y>(m-1))
        return false;
    return true;
}

int main()
{
    int n,m,arr[60][60],c=0;
    char ch;
    while(cin>>n>>m && (n || m)){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ch;
                arr[i][j]=(int)ch-65;
            }
        }
        int visited[60][60],res=-1111,dist[100];
        memset(dist,0,sizeof(dist));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==0){
                    memset(visited,0,sizeof(visited));
                    queue< pair<int,int> >q;
                    q.push(make_pair(i,j));
                    visited[i][j]=1;
                    dist[arr[i][j]]=1;
                    int c=0;
                    while(!q.empty()){
                        pair<int,int> p=q.front();
                        int x=p.first,y=p.second;
                        q.pop();
                        for(int k=0; k<8; k++){
                            if(isValid((fx[k]+x),(fy[k]+y),n,m) && visited[fx[k]+x][fy[k]+y]==0 && arr[fx[k]+x][fy[k]+y]-arr[x][y]==1){
                                q.push(make_pair(fx[k]+x,fy[k]+y));
                                visited[fx[k]+x][fy[k]+y]=1;
                                dist[arr[fx[k]+x][fy[k]+y]]=dist[arr[x][y]]+1;
                            }
                        }
                    }
                }
            }
        }
        for(int i=0; i<30; i++){
            if(dist[i]>res)
                res=dist[i];
        }
        printf("Case %d: %d\n",++c,res);
    }
    return 0;
}

