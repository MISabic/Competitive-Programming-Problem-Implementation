#include<bits/stdc++.h>
using namespace std;

vector<int>vec[500];
int visited[500];

void dfs(int x)
{
    //cout<<"value :: "<<x<<endl;
    visited[x]=1;
    for(int i=0; i<vec[x].size(); i++){
        if(visited[vec[x][i]]==0)
            dfs(vec[x][i]);
    }
}

int main()
{
    int n,m,k,f,u;
    while(cin>>n>>m){
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>k;
            for(int j=0; j<k; j++){
                cin>>u;
                vec[i+1].push_back(u+n);
                vec[u+n].push_back(i+1);
            }
        }
        int flag=0;
        for(int i=1; i<=n; i++){
            if(vec[i].size()==0) ++cnt;
            else if(visited[i]==0){
                ++cnt;
                flag=1;
                dfs(i);
            }
        }
        if(flag==0) cout<<cnt<<endl;
        else cout<<cnt-1<<endl;
        for(int i=1; i<=n; i++) vec[i].clear();
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
