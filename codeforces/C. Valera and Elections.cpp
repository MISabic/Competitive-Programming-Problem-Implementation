#include<bits/stdc++.h>
using namespace std;

vector<int>vec[100010];
int visited[100010],chkarr[100010],fin[100010],c=0;

int dfs(int x)
{
    if(chkarr[x]==1) fin[x]=1;
    visited[x]=1;
    for(int i=0; i<vec[x].size(); i++){
        if(visited[vec[x][i]]==0){
            dfs(vec[x][i]);
            fin[x]+=fin[vec[x][i]];
            if(fin[vec[x][i]]==1) ++c;
        }
    }
}

int main()
{
    int n,u,v,t;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>u>>v>>t;
        vec[u].push_back(v);
        vec[v].push_back(u);
        if(t==2) chkarr[u]=chkarr[v]=1;
    }
    dfs(1);
    cout<<c<<endl;
    for(int i=1; i<=n; i++){
        if(fin[i]==1) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
