#include<bits/stdc++.h>
using namespace std;

struct data{
    int src;
    int w;
    data(int s,int weight){
        src=s,w=weight;
    }
    bool operator<(data p)const{
        return w<p.w;
    }
};

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m,wi,c=0;
    string from,to;
    while(cin>>n>>m && (n || m)){

        map<string,int>mp;
        vector<int>vec[500];
        int num=1,arr[250][250],visited[250],mx=10000000;

        memset(arr,0,sizeof(arr));

        for(int i=0; i<m; i++){
            cin>>from>>to>>wi;

            if(mp[from]==0) mp[from]= num++;
            if(mp[to]==0) mp[to]= num++;

            int x=mp[from],y=mp[to];

            vec[x].push_back(y);
            vec[y].push_back(x);

            if(arr[x][y]<wi){
                arr[x][y]=wi;
                arr[y][x]=wi;

            }
        }
        memset(visited,0,sizeof(visited));

        cin>>from>>to;

        priority_queue<data>pq;
        pq.push(data(mp[from],10000000));

        while(!pq.empty()){     //cout<<pq.top().src<<"     "<<pq.top().w<<endl;

            int x=pq.top().src,sz=vec[x].size();

            if(pq.top().w<mx) mx=pq.top().w;

            if(x==mp[to]) break;

            pq.pop();
            visited[x]=1;

            for(int i=0; i<sz; i++){
                if(visited[vec[x][i]]==0){
                    pq.push(data(vec[x][i],arr[x][vec[x][i]]));
                }
            }

        }
        cout<<"Scenario #"<<++c<<endl;
        cout<<mx<<" tons"<<endl;
        cout<<endl;
    }
    return 0;
}
