#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>roads[],int total_visitor[],int visited[],int v)
{
    visited[v]=1;
    ++total_visitor[v];
    for(int i=0; i<roads[v].size(); i++){
        if(!visited[roads[v][i]]){
            dfs(roads,total_visitor,visited,roads[v][i]);
        }
    }
}

int main()
{
    int t,k,n,m,c,u,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d %d",&k,&n,&m);

        vector<int>people,roads[n+5];
        int total_visitor[n+5],visited[n+5],cnt=0;
        memset(total_visitor,0,sizeof(total_visitor));

        for(int j=0; j<k; j++){
            scanf("%d",&c);
            people.push_back(c);
        }
        for(int j=0; j<m; j++){
            scanf("%d %d",&u,&v);
            roads[u].push_back(v);
        }

        for(int j=0; j<people.size(); j++){
            memset(visited,0,sizeof(visited));
            dfs(roads,total_visitor,visited,people[j]);
        }
        for(int j=1; j<=n; j++){
            //cout<<" "<<total_visitor[j]<<endl;
            (total_visitor[j]==k)?(++cnt):cnt;
        }

        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}
