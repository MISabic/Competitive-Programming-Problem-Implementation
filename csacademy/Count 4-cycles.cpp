#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> a[100100];
map<pair<int,int>,int> b;

int main()
{
    int n,u,v;
    while(cin>>n){
        for(int i=0; i<n-1; i++){
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i=0; i<n-1; i++){
            cin>>u>>v;
            b[{u,v}]=1;
            b[{v,u}]=1;
        }
        int res=0;
        for(int i=1; i<=n; i++){
            for(int j=0; j<a[i].size(); j++){
                if(b[{i,a[i][j]}]==1){   //cout<<i<<"   "<<a[i][j]<<"   "<<b[{i,a[i][j]}]<<endl;
                    ++res;
                }
            }
        }
        res/=2;
        cout<<res<<endl;
    }
    return 0;
}
