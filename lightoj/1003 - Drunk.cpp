#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int>arr[],int visited[],int v)
{
    visited[v]=1;

    for(int i=0; i<arr[v].size(); i++){
        int x=arr[v][i];
        if(!visited[x] && dfs(arr,visited,x)){
            return true;
        }
        else if(visited[x]==1){
            return true;
        }
    }
    visited[v]=2;
    return false;
}

int main()
{
    //freopen("out.txt","w",stdout);
    int t,m;
    string a,b;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>m;
        int ind=0,flag=0;

        unordered_map<string,int>mp;
        vector<int>arr[m*2+10];

        for(int j=0; j<m; j++){
            cin>>a>>b;
            if(!mp[a]) mp[a]=++ind;
            if(!mp[b]) mp[b]=++ind;
            arr[mp[a]].push_back(mp[b]);
        }

        int visited[m*2+10];
        memset(visited,0,sizeof(visited));

        for(auto x:mp){
            if(!visited[x.second]){
                if(dfs(arr,visited,x.second)) flag=1;
            }
        }

        if(!flag) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}

