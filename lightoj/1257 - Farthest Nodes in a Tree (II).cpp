#include<bits/stdc++.h>
#define reset(a,b) memset(a,0,sizeof(a)),memset(b,0,sizeof(b))
using namespace std;;

void dfs(vector<pair<int,int>> arr[],int visited[],int dist[],int v)
{
    visited[v]=1;
    for(int i=0; i<arr[v].size(); i++){
        int x=arr[v][i].first,w=arr[v][i].second;
        if(!visited[x]){
            dist[x]=max(dist[x],dist[v]+w);
            dfs(arr,visited,dist,x);
        }
    }
}

int main()
{
    int t,n,u,v,w;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);

        vector<pair<int,int>>arr[n+2];
        int visited[n+2],dist[n+2],res[n+2];
        memset(res,0,sizeof(res));

        for(int j=0; j<n-1; j++){
            scanf("%d %d %d",&u,&v,&w);
            arr[u].push_back({v,w});
            arr[v].push_back({u,w});
        }

        printf("Case %d:\n",i);

        reset(visited,dist);
        dfs(arr,visited,dist,0);
        int mx=0,ind;
        for(int j=0; j<n; j++){
            if(dist[j]>mx){
                mx=dist[j];
                ind=j;
            }
        }

        reset(visited,dist);
        dfs(arr,visited,dist,ind);
        mx=0;
        for(int j=0; j<n; j++){
            if(dist[j]>mx){
                mx=dist[j];
                ind=j;
            }
            res[j]=dist[j];
        }

        reset(visited,dist);
        dfs(arr,visited,dist,ind);
        for(int j=0; j<n; j++){
            res[j]=max(res[j],dist[j]);
        }

        for(int j=0; j<n; j++){
            printf("%d\n",res[j]);
        }
    }
    return 0;
}
