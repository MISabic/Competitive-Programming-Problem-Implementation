#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,u,v,arr[1010];
    while(cin>>n>>m>>k){
        vector<int>vec[1010];
        vector<int>res;
        int visited[1010],mx=0,total=0;
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }
        for(int i=0; i<m; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        memset(visited,0,sizeof(visited));

        for(int i=0; i<k; i++){
            int con=0;
            queue<int>q;
            q.push(arr[i]);
            visited[arr[i]]=1;
            while(!q.empty()){
                int x=q.front(),sz=vec[x].size();   //cout<<" here "<<x<<endl;
                q.pop();
                for(int j=0; j<sz; j++){
                    if(visited[vec[x][j]]==0){
                        q.push(vec[x][j]);
                        visited[vec[x][j]]=1;
                        ++con;
                    }
                }
            }
            res.push_back(con);
        }

        sort(res.begin(),res.end());
        long long ans=0;
        for(int i=0; i<res.size()-1; i++){
            total+=res[i];
            ans+=(((res[i]+1)*(res[i]+1-1))/2)-res[i];
        }
        long long totalnodes=n-(total+res.size()-1);
        ans+=((totalnodes*(totalnodes-1))/2)-(m-total);
        cout<<ans<<endl;
    }
    return 0;
}
