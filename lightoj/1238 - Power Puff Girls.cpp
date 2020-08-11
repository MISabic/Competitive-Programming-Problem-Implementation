#include<bits/stdc++.h>
using namespace std;

char arr[25][25];
int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};
int t,m,n,visited[25][25];

bool valid(int x,int y)
{
    return (x>=0 && x<m && y>=0 && y<n);
}

int bfs(pair<int,int> src)
{
    memset(visited,0,sizeof(visited));

    queue<tuple<int,int,int>>q;
    q.push({src.first,src.second,0});

    while(!q.empty()){
        int i_x=get<0>(q.front());
        int i_y=get<1>(q.front());
        int i_v=get<2>(q.front());
        q.pop();

        for(int i=0; i<4; i++){
            int n_x=i_x+fx[i];
            int n_y=i_y+fy[i];

            if(valid(n_x,n_y) && !visited[n_x][n_y] && arr[n_x][n_y]!='#' && arr[n_x][n_y]!='m'){

                if(arr[n_x][n_y]=='h') return i_v+1;

                q.push({n_x,n_y,i_v+1});
                visited[n_x][n_y]=1;
            }
        }
    }
}

int main()
{
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&m,&n);
        pair<int,int> a,b,c;
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                scanf(" %c",&arr[j][k]);
                if(arr[j][k]=='a') a={j,k};
                else if(arr[j][k]=='b') b={j,k};
                else if(arr[j][k]=='c') c={j,k};
            }
        }

        printf("Case %d: %d\n",i,max(max(bfs(a),bfs(b)),bfs(c)));

    }
    return 0;
}
