#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,u,v,c=0;
    cin>>t;
    while(t--){
        vector<int>vec[200];
        cin>>n>>m;
        for(int i=0; i<m; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            //vec[v].push_back(u);
        }
        int counter=0;
        for(int i=1; i<=n; i++){
            queue<int>q;
            q.push(i);
            int visited[200],flag=0;
            memset(visited,0,sizeof(visited));
            while(!q.empty()){
                int x=q.front(),sz=vec[x].size();
                q.pop();

                //cout<<x<<endl;

                for(int j=0; j<sz; j++){
                    if(vec[x][j]==i){
                        ++counter;
                        flag=1;
                        break;
                    }
                    if(visited[vec[x][j]]==0){  //cout<<counter<<"      kk      "<<vec[x][j]<<endl;
                        q.push(vec[x][j]);
                        visited[vec[x][j]]=1;
                    }
                }
                if(flag==1) break;


            }
            //cout<<"hello"<<endl;
        }
        printf("Case %d: %d\n",++c,n-counter);
    }
    return 0;
}
