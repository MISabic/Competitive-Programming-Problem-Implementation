#include<bits/stdc++.h>
using namespace std;

int fx[]={+0,+0,+1,-1,-1,-1,+1,+1};
int fy[]={+1,-1,+0,+0,-1,+1,-1,+1};
int n,m,a,b,w,arr[305][305],visited[305][305],res[305][305],par[305][305];

bool val(int x,int y,int n)
{
    return (x>=0 && y>=0 && x<n && y<n);
}

struct data{
    int u,v,w;
    data(){};
    data(int a,int b,int c){
        u=a,v=b,w=c;
    }
};

int main()
{
    while(scanf("%d %d",&n,&m)==2){
        for(int i=0; i<m; i++){
            scanf("%d %d %d",&a,&b,&w);
            queue<data>q;
            q.push(data(a,b,w-1));
            res[a][b]+=w;
            visited[a][b]=1;
            while(!q.empty()){
                int x=q.front().u;
                int y=q.front().v;
                int weight=q.front().w;
                q.pop();
                if(weight==0) continue;
                for(int i=0; i<8; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0){
                        visited[nx][ny]=1;
                        res[nx][ny]+=weight;
                        q.push(data(nx,ny,weight-1));
                    }
                }
            }
            memset(visited,0,sizeof(visited));
        }
        int mx=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mx=max(mx,res[i][j]);
            }
        }
        printf("%d\n",mx);
        memset(res,0,sizeof(res));
    }
}
