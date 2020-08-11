#include<bits/stdc++.h>
using namespace std;

vector<int>vec[100010],res,arr;
int visited[100010],order[100100];

int comp(int a,int b)
{
    return order[a]<order[b];
}

int dfs(int x)
{
    res.push_back(x);
	visited[x] = true;
    for(int i=0; i<vec[x].size(); i++)
    {
        if(!visited[vec[x][i]])
        {
            dfs(vec[x][i]);
        }
    }
}

int main()
{
    int n,q,u,v,k,x;
    while(cin>>n>>k){
        for(int i=0; i<n; i++){
            cin>>x;
            arr.push_back(x);
            order[arr[i]]=i;
        }
        for(int i=0; i<k; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        for(int i=1; i<=n; i++){
            sort(vec[i].begin(),vec[i].end(),comp);
        }
        /*for(int i=1; i<=n; i++){
            for(int j=0; j<vec[i].size(); j++){
                cout<<i<<"  ::  "<<vec[i][j]<<endl;
            }
            cout<<endl;
        }*/
        dfs(1);
        cout<<(arr==res)<<endl;

        for(int i=1; i<=n; i++) vec[i].clear();
        memset(visited,false,sizeof(visited));
        arr.clear();
        res.clear();
    }
    return 0;
}

