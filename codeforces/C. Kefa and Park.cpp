#include<bits/stdc++.h>
using namespace std;

vector<long long>vec[100010];
pair<long long,long long>pi[100010];
long long m,visited[100010],c[100010],cat[100010],leaf[100010];

//dfs variation sample #1
long long dfs(long long x)
{
	visited[x] = true;
    for(long long i=0; i<vec[x].size(); i++)
    {
        if(!visited[vec[x][i]])
        {
            if(c[x]>m){
                c[vec[x][i]]=c[x];
            }
            else{
                if(cat[vec[x][i]]==0) c[vec[x][i]]=0;
                else c[vec[x][i]]+=(c[x]+1);
            }
            leaf[x]++;
            dfs(vec[x][i]);
        }
    }
	return c[x];
}

int main()
{
    long long n,u,v,x;
    while(cin>>n>>m){
        for(int i=1; i<=n; i++) cin>>cat[i];

        for(long long i=0; i<n-1; i++){
            cin>>u>>v;
            pi[i+1]=make_pair(u,v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        c[1]=cat[1];
        dfs(1);
        //for(int i=1; i<=n; i++) cout<<i<<"  ::  "<<c[i]<<endl;
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(leaf[i]==0 && c[i]<=m) ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
