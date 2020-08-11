#include<bits/stdc++.h>
using namespace std;

struct data{
    int src;
    int w;
    data(int s,int weight){
        src=s,w=weight;
    }
    bool operator<(data p)const{
        return w>p.w;
    }
};

int main()
{
    int n,m,u,v,w;
    while(cin>>n>>m){
        vector<int>vec[10010];
        map<pair<int,int>,int>mp;
        for(int i=0; i<m; i++){
            cin>>u>>v>>w;
            if(u==v)
                vec[u].push_back(v);
            else{
                vec[u].push_back(v);
                vec[v].push_back(u);
            }
            int val=mp[make_pair(u,v)];
            if(val!=0 && val>w){
                mp[make_pair(u,v)]=w;
                mp[make_pair(v,u)]=w;
            }
            else if(val==0){
                mp[make_pair(u,v)]=w;
                mp[make_pair(v,u)]=w;
            }
        }
        int visited[10010];
        long long res=0;
        memset(visited,0,sizeof(visited));
        priority_queue<data>pq;
        pq.push(data(1,0));
        while(!pq.empty()){
            int x=pq.top().src;     //cout<<x<<"     "<<pq.top().w<<endl;
            if(visited[x]==0) res+=(long long)pq.top().w;
            visited[x]=1;
            pq.pop();
            for(int i=0; i<vec[x].size(); i++){
                if(visited[vec[x][i]]==0){
                    pq.push(data(vec[x][i],mp[make_pair(vec[x][i],x)]));
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
