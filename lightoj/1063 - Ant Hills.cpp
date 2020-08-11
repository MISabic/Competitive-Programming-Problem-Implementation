#include<bits/stdc++.h>
using namespace std;

int cnt=0,low[10005],disc[10005],parent[10005],visited[10005],ap[10005];

void articulation_point(vector<int>graph[],int visited[],int v)
{
    visited[v]=1;
    disc[v]=low[v]=++cnt;

    int child=0;

    for(int i=0; i<graph[v].size(); i++){
        int x=graph[v][i];
        if(!visited[x]){
            ++child;
            parent[x]=v;
            articulation_point(graph,visited,x);

            low[v]=min(low[v],low[x]);

            if(parent[v]==-1 && child>1) ap[v]=1;

            if(parent[v]!=-1 && disc[v]<=low[x]) ap[v]=1;
        }
        else if(x!=parent[v]) low[v]=min(low[v],disc[x]);
    }
}

int main()
{
    int t,n,m,u,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&m);

        vector<int>graph[n+5];

        memset(ap,0,sizeof(ap));
        memset(low,0,sizeof(low));
        memset(disc,0,sizeof(disc));
        memset(parent,-1,sizeof(parent));
        memset(visited,0,sizeof(visited));

        for(int j=0; j<m; j++){
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int cnt=0;
        for(int j=1; j<=n; j++){
            if(!visited[j]){
                articulation_point(graph,visited,j);
            }
        }

        cnt=0;
        for(int j=1; j<=n; j++) cnt+=ap[j];

        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}
