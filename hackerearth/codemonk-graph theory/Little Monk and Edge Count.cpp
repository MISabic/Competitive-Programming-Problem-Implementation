#include<bits/stdc++.h>
using namespace std;

vector<long long>vec[100010];
pair<long long,long long>pi[100010];
long long visited[100010],c[100010];

long long dfs(long long x)
{
	visited[x] = true;
    for(long long i=0; i<vec[x].size(); i++)
    {
        if(!visited[vec[x][i]])
        {
            c[x]+=dfs(vec[x][i]);
        }
    }
    c[x]+=1;
	return c[x];
}

int main()
{
    long long n,q,u,v,x;
    while(cin>>n>>q){
        for(long long i=0; i<n-1; i++){
            cin>>u>>v;
            pi[i+1]=make_pair(u,v);
            vec[u].push_back(v);

            vec[v].push_back(u);
        }
        dfs(1);
        for(long long i=0; i<q; i++){
            cin>>x;
            long long val=min(c[pi[x].first],c[pi[x].second]);
            /** minimum nite hobe karon -
                ekhane borota parent ar chotota child hobe;
                borotake jodi parent dhori ar chototake jodi child dhori; tahole duitake
                gun kora mane ami parent er sathe, child er jei koita child ache, taderke dui bar jog korchi
                ei karone age minimum nibo tarpor mot node theke bad diye gun korbo :)
            */
            cout<<abs(val-n)*val<<endl;
            //cout<<c[pi[x].first]<<"    "<<c[pi[x].second]<<endl;
        }
    }
    return 0;
}
