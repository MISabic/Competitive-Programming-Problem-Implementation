#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,u,v,w,src;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&m);
        vector<pair<int,int>>graph[n+5];
        vector<int> dist(n+5,100000000);

        for(int j=0; j<m; j++){
            scanf("%d %d %d",&u,&v,&w);
            graph[u].push_back({w,v});
            graph[v].push_back({w,u});
        }
        scanf("%d",&src);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        pq.push({0,src});
        dist[src]=0;

        while(!pq.empty()){
            pair<int,int> x=pq.top();
            pq.pop();
            int sz=graph[x.second].size();
            for(int j=0; j<sz; j++){
                pair<int,int> temp=graph[x.second][j];
                if(max(dist[x.second],temp.first)<dist[temp.second]){
                    dist[temp.second]=max(dist[x.second],temp.first);
                    pq.push(temp);
                }
            }
        }
        printf("Case %d:\n",i);
        for(int j=0; j<n; j++){
            (dist[j]==100000000)?printf("Impossible\n"):printf("%d\n",dist[j]);
        }
    }
    return 0;
}
