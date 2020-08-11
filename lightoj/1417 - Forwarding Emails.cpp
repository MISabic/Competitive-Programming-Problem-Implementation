#include<bits/stdc++.h>
using namespace std;

stack<int>st;
int totalNodes;

void dfs(vector<int> vec[],int visited[],int v)
{
    visited[v]=1;
    for(int i=0; i<vec[v].size(); i++){
        int x=vec[v][i];
        if(!visited[x])
            dfs(vec,visited,x);
    }
    st.push(v);
}

void dfs2(vector<int> vec[],int visited[],int v,int index)
{
    ++totalNodes;
    visited[v]=index;
    for(int i=0; i<vec[v].size(); i++){
        int x=vec[v][i];
        if(!visited[x])
            dfs2(vec,visited,x,index);
    }
}

int dfs3(vector<int> vec[],int visited[],int numberOfNodes[],int tree[],int v,int index)
{
    cout<<" "<<v<<endl;
    visited[v]=index;
    int total=numberOfNodes[v];
    for(int i=0; i<vec[v].size(); i++){
        int x=vec[v][i];
        if(!visited[x]){
            total+=dfs3(vec,visited,numberOfNodes,tree,x,index);
        }
        else if(visited[x]!=index){
            cout<<"hey"<<endl;
            total+=tree[x];
        }
    }
    cout<<v<<" here "<<total<<endl;
    return tree[v]=total;
}

int main()
{
    int t,n,u,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);

        vector<int>graph[n+5],graphTranspose[n+5];
        int index=0,res=0,visited[n+5];

        for(int j=0; j<n; j++){
            scanf("%d %d",&u,&v);
            graph[u].push_back(v);
            graphTranspose[v].push_back(u);
        }

        memset(visited,0,sizeof(visited));

        for(int j=1; j<=n; j++){
            if(!visited[j])
                dfs(graph,visited,j);
        }

        memset(visited,0,sizeof(visited));

        int numberOfNodes[index+5],tree[index+5];
        memset(numberOfNodes,0,sizeof(numberOfNodes));
        memset(tree,0,sizeof(tree));

        while(!st.empty()){
            int x=st.top();
            st.pop();
            if(!visited[x]){
                totalNodes=0;
                dfs2(graphTranspose,visited,x,++index);
                numberOfNodes[index]=totalNodes;
            }
        }

        cout<<index<<endl;
        for(int j=1; j<=n; j++){
            cout<<j<<" "<<visited[j]<<endl;
        }

        vector<int> dag[index+5];
        for(int j=1; j<=n; j++){
            for(int k=0; k<graph[j].size(); k++){
                int x=graph[j][k];
                if(visited[j]!=visited[x])
                    dag[visited[j]].push_back(visited[x]);
            }
        }

        for(int j=1; j<=index; j++){
            cout<<j<<" -> ";
            for(auto x:dag[j]){
                cout<<x<<" ";
            }
            cout<<endl;
        }

        memset(visited,0,sizeof(visited));
        for(int j=1; j<=index; j++){
            if(!visited[j]){
                dfs3(dag,visited,numberOfNodes,tree,j,j);
            }
        }

        for(int j=1; j<=index; j++){
            cout<<j<<"  ::  "<<tree[j]<<endl;
        }

        //printf("Case %d: %d\n",i,ind);
    }
}
