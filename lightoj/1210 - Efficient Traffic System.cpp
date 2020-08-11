#include<bits/stdc++.h>
using namespace std;

stack<int>st;

void dfs(vector<int>vec[],int visited[],int v)
{
    visited[v]=1;
    for(int i=0; i<vec[v].size(); i++){
        int x=vec[v][i];
        if(!visited[x]) dfs(vec,visited,x);
    }
    st.push(v);
}

void assignIndex(vector<int>vec[],int components[],int v,int index)
{
    components[v]=index;
    for(int i=0; i<vec[v].size(); i++){
        int x=vec[v][i];
        if(!components[x]) assignIndex(vec,components,x,index);
    }
}

int main()
{
    int t,n,m,u,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&n,&m);

        vector<int>graph[n+5],graphTranspose[n+5];
        int cnt=0,visited[n+5];
        memset(visited,0,sizeof(visited));

        for(int j=0; j<m; j++){
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
            graphTranspose[v].push_back(u);
        }
        for(int j=1; j<=n; j++){
            if(!visited[j])
                dfs(graph,visited,j);
        }

        int components[n+5];
        memset(components,0,sizeof(components));

        while(!st.empty()){
            int x=st.top();
            st.pop();
            if(!components[x]){
                ++cnt;
                assignIndex(graphTranspose,components,x,cnt);
            }
        }

        if(cnt==1){
            printf("Case %d: 0\n",i);
            continue;
        }

        bool indegree[n+5],outdegree[n+5];
        memset(indegree,false,sizeof(indegree));
        memset(outdegree,false,sizeof(outdegree));

        for(int j=1; j<=n; j++){
            for(int k=0; k<graph[j].size(); k++){
                int x=graph[j][k];
                if(components[j]!=components[x]){
                    outdegree[components[j]]=true;
                    indegree[components[x]]=true;
                }
            }
        }


        int in=0,out=0;
        for(int j=1; j<=cnt; j++){
            in+=!indegree[j];
            out+=!outdegree[j];
        }

        printf("Case %d: %d\n",i,max(in,out));
    }
    return 0;
}
