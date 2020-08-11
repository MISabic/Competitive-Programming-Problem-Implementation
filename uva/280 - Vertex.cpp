#include<bits/stdc++.h>
using namespace std;

vector<int>vec[100100];
int visited[100100],res;

void dfs(int src)
{
    for(int i=0; i<vec[src].size(); i++){
        if(visited[vec[src][i]]==0){
            visited[vec[src][i]]=1;
            dfs(vec[src][i]);
        }
    }
}

int main()
{
    int n,u,v,k,q;
    while(cin>>n && n){
        while(cin>>u && u){
            while(cin>>v && v){
                vec[u].push_back(v);
            }
        }
        cin>>k;
        for(int i=0; i<k; i++){
            cin>>q;
            memset(visited,0,sizeof(visited));
            vector<int>ans;
            dfs(q);
            for(int i=1; i<=n; i++)
                if(visited[i]==0)
                    ans.push_back(i);
            cout<<ans.size();
            for(int i=0; i<ans.size(); i++)
                cout<<" "<<ans[i];
            cout<<endl;
        }
        for(int i=0; i<=n; i++)
            vec[i].clear();
    }
}
