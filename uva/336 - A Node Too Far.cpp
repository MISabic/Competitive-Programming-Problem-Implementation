#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    int n,u,v,cas=0;
    while(cin>>n && n){
        map< int,vector<int> >vec;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>u>>v;
            mp[u]=1;
            mp[v]=1;
            if(u==v) vec[u].push_back(v);
            else{
                vec[u].push_back(v);
                vec[v].push_back(u);
            }
        }
        while(cin>>u>>v && (u || v)){
            if(mp[u]==0){
                mp.erase(u);
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cas,mp.size(),u,v);
                continue;
            }
            queue<int>q;
            q.push(u);
            map<int,int>visited,res;
            visited[u]=1;
            while(!q.empty()){
                int x=q.front();
                q.pop();
                if(res[x]+1>v) break;
                for(int i=0; i<vec[x].size(); i++){
                    if(!visited[vec[x][i]]){
                        q.push(vec[x][i]);
                        visited[vec[x][i]]=1;
                        res[vec[x][i]]=res[x]+1;
                    }
                }
            }
            int c=-1;
            for(map<int,int>::iterator it=mp.begin(); it!=mp.end(); it++){
                if(res[it->first]==0)
                    ++c;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cas,c,u,v);
        }
    }
    return 0;
}
