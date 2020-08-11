#include<bits/stdc++.h>
using namespace std;

int inc[800101];
int res[800101];
int visited[800101];
vector<int>vec[800101];

int main()
{
    int t,n,m,u,v,src,dest,k=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1; i<=m; i++)
            cin>>inc[i];
        for(int i=1; i<=n; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        cin>>src>>dest;
        if(src==dest){
            printf("Case %d: %d\n",++k,inc[dest]);
            continue;
        }
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int x=q.front(),sz=vec[x].size();
            q.pop();
            for(int i=0; i<sz; i++){
                if(visited[vec[x][i]]==0){
                    q.push(vec[x][i]);
                    visited[vec[x][i]]=1;
                    res[vec[x][i]]=res[x]+1;
                }
            }
        }
        //cout<<"   "<<res[dest]<<endl;
        if(visited[dest]==1){
            if((inc[dest]-res[dest])>=0) printf("Case %d: %d\n",++k,inc[dest]-res[dest]);
            else printf("Case %d: Don't travel\n",++k);
        }
        else printf("Case %d: Path not found\n",++k);
        memset(inc,0,sizeof(inc));
        memset(res,0,sizeof(res));
        memset(visited,0,sizeof(visited));
    }
    return 0;
}

