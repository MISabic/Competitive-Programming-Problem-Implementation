// not nolved

#include<bits/stdc++.h>
using namespace std;

int t,n,index,arr[30005];
vector<int>euler_path;

void dfs(vector<int> vec[],int visited[],int v)
{
    visited[v]=1;
    euler_path.push_back(v);
    for(int i=0; i<vec[v].size(); i++){
        int x=vec[v][i];
        if(!visited[x]){
            //euler_path.push_back(v);
            dfs(vec,visited,x);
            euler_path.push_back(v);
        }
    }
    //euler_path.push_back(v);
}

int main()
{
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);

        unordered_map<int,int>ump;
        int index=0;

        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }

        int u,v,visited[n+5];
        vector<int> vec[n+5];
        memset(visited,0,sizeof(visited));
        index=0;

        for(int j=0; j<n-1; j++){
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            //vec[v].push_back(u);
        }

        dfs(vec,visited,0);

        for(auto x:euler_path){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}
