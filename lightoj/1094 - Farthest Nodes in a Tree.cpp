#include<bits/stdc++.h>
using namespace std;

int visited[30005],dist[30005];

void dfs(vector<pair<int,int>> arr[],int v)
{
    visited[v]=1;
    for(int i=0; i<arr[v].size(); i++){
        int x=arr[v][i].first;
        if(!visited[x]){
            dist[x]=dist[v]+arr[v][i].second;
            dfs(arr,x);
        }
    }
}

int main()
{
    int t,n,u,v,w;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){

        scanf("%d",&n);
        vector<pair<int,int>>arr[n];
        for(int j=0; j<n-1; j++){
            scanf("%d %d %d",&u,&v,&w);
            arr[u].push_back({v,w});
            arr[v].push_back({u,w});
        }

        memset(visited,0,sizeof(visited));
        memset(dist,0,sizeof(dist));
        dfs(arr,0);

        //for(int j=0; j<n; j++) cout<<j<<" :: "<<dist[j]<<endl;
        int ind,res=0;
        for(int j=0; j<n; j++){
            if(dist[j]>res){
                res=dist[j];
                ind=j;
            }
        }

        memset(visited,0,sizeof(visited));
        memset(dist,0,sizeof(dist));
        dfs(arr,ind);
        for(int j=0; j<n; j++) res=max(res,dist[j]);

        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
