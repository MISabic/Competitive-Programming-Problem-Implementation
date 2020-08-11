#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

long long n,q,u,v,arr[10000],visited[10000];

int main()
{
    while(cin>>n){
        vector<ll>vec[10000];
        for(long long i=1; i<=n-1; i++){
            cin>>u;
            arr[u]=1;
            vec[u].push_back(i+1);
        }
        int flag=0;
        queue<ll>q;
        q.push(1);
        visited[1]=1;
        while(!q.empty()){
            ll x=q.front(),cnt=0;
            q.pop();
            for(int i=0; i<vec[x].size(); i++){
                if(visited[vec[x][i]]==0){
                    if(arr[vec[x][i]]!=1) ++cnt;
                    visited[vec[x][i]]=1;
                    q.push(vec[x][i]);
                }
            }
            if(cnt<3 && arr[x]==1) flag=1;
        }
        if(flag==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        memset(arr,0,sizeof(arr));
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
