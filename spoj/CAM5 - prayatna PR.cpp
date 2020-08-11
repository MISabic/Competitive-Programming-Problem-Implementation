#include<bits/stdc++.h>

using namespace std;

vector<int>vec[100010];
int visited[100010];

void dfs(int x)
{
	visited[x] = true;
    for(long long i=0; i<vec[x].size(); i++)
    {
        if(!visited[vec[x][i]])
        {
            dfs(vec[x][i]);
        }
    }
}

int main()
{
    int t,n,k,u,v;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0; i<k; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(visited[i]==0){
                ++ans;
                dfs(i);
            }
        }
        cout<<ans<<endl;
        for(int i=0; i<n; i++)
            vec[i].clear();
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
