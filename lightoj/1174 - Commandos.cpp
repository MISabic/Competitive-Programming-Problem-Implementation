#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> arr[],int v,int dist[])
{
    int visited[105];
    memset(visited,0,sizeof(visited));
    queue<int>q;
    q.push(v);
    visited[v]=1;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int j=0; j<arr[x].size(); j++){ //cout<<arr[x][j]<<endl;
            if(!visited[arr[x][j]]){
                visited[arr[x][j]]=1;
                dist[arr[x][j]]=dist[x]+1;
                q.push(arr[x][j]);
            }
        }
    }
}

int main()
{
    int t,n,r,u,v,s,d;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&r);

        vector<int>arr[n+5];
        int src[n+5],dest[n+5];
        memset(src,0,sizeof(src));
        memset(dest,0,sizeof(dest));

        for(int j=0; j<r; j++){
            scanf("%d %d",&u,&v);
            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        scanf("%d %d",&s,&d);

        bfs(arr,s,src);
        bfs(arr,d,dest);

        int res=0;
        for(int j=0; j<n; j++){
            res=max(res,src[j]+dest[j]);
        }
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
