#include<bits/stdc++.h>
using namespace std;

int dfs(vector<pair<int,int>> graph[],int visited[],int v,int par)
{
    if(v==1 && par!=-1) return 0;
    visited[v]=1;
    int res=0;
    for(auto x:graph[v]){
        int node=x.second;
        int cost=x.first;
        if(!visited[node] || (node==1 && par!=1)){
            res+=cost+dfs(graph,visited,node,v);
        }
    }
    return res;
}

int main()
{
    int t,n,a,b,c;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);

        vector<pair<int,int>> graph[n+5];
        int visited[n+5],total=0;
        memset(visited,0,sizeof(visited));

        for(int j=0; j<n; j++){
            scanf("%d %d %d",&a,&b,&c);
            graph[a].push_back({0,b});
            graph[b].push_back({c,a});
            total+=c;
        }
        int res=dfs(graph,visited,1,-1);
        printf("Case %d: %d\n",i,min(res,total-res));
    }
}
