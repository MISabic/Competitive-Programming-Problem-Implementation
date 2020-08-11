#include<bits/stdc++.h>
using namespace std;

vector<int>vec[500010];
int visited[500010],parentColor[500010],par[500010];

int main()
{
    int n,q,u,v,x;
    while(cin>>n){
        for(int i=0; i<n-1; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        int mx=0,src;
        for(int i=1; i<=n; i++){
            if(vec[i].size()>mx){
                mx = vec[i].size();
                src=i;
            }
        }
        cout<<mx+1<<endl;

        queue<int>q;
        q.push(src);
        visited[src]=src;
        parentColor[src]=1;
        par[src]=1;

        while(!q.empty()){
            int x=q.front(),sz=vec[x].size(),color=1;
            q.pop();
            for(int i=0; i<sz; i++){
                if(visited[vec[x][i]]==0){
                    visited[vec[x][i]]=1;
                    q.push(vec[x][i]);
                    par[vec[x][i]]=x;

                    if(color==parentColor[x] || color==parentColor[par[x]]){
                        ++color;
                        if(color==parentColor[x] || color==parentColor[par[x]]){
                            ++color;
                            parentColor[vec[x][i]]=color;
                        }
                        else{
                            parentColor[vec[x][i]]=color;
                        }
                        ++color;
                    }
                    else{
                        parentColor[vec[x][i]]=color;
                        ++color;
                    }
                }
            }
        }
        for(int i=1; i<=n; i++)
            cout<<parentColor[i]<<" ";
        cout<<endl;
        /*memset(par,0,sizeof(par));
        memset(parentColor,0,sizeof(parentColor));
        memset(visited,0,sizeof(visited));
        for(int i=0; i<=n; i++)
            vec[i].clear();*/
    }
    return 0;
}
