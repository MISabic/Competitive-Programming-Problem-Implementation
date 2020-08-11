#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,u,v;
    while(cin>>n && n){
        cin>>e;
        vector<int>vec[250];
        for(int i=0; i<e; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        queue<int>q;
        q.push(0);
        int bicolor[250];
        memset(bicolor,-1,sizeof(bicolor));
        bicolor[0]=1;
        int flag=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i=0; i<vec[x].size(); i++){
                if((bicolor[vec[x][i]]==0 && abs(bicolor[x]-1)==1) || (bicolor[vec[x][i]]==1 && abs(bicolor[x]-1)==0)){
                    flag=1;
                    break;
                }
                if(bicolor[vec[x][i]]==-1){
                    bicolor[vec[x][i]]=abs(bicolor[x]-1);
                    q.push(vec[x][i]);
                }
            }
            if(flag==1) break;
        }
        if(flag==1) cout<<"NOT BICOLORABLE."<<endl;
        else cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}
