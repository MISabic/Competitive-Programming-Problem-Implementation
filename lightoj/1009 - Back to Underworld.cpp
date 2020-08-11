#include<cstdio>
#include<cstring>
#include<iostream>
#include<utility>
#include<queue>
#include<set>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,u,v,c=0;
    scanf("%d",&t);
    while(t--){
        int lim=0,pick,o,t;
        scanf("%d",&n);
        vector<int> vec[20005];
        for(int i=0; i<n; i++){
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
            pick=u;
        }
        int visited[20000+5],res[20000+5],chidori=0;
        memset(visited,0,sizeof(visited));
        memset(res,0,sizeof(res));
        for(int j=0; j<20002; j++){
            if(!visited[j] && vec[j].size()){
                queue<int>q;
                q.push(j);
                visited[j]=1,res[j]=1,o=1,t=0;
                while(!q.empty()){
                    int x=q.front(),sz=vec[q.front()].size();
                    q.pop();
                    for(int i=0; i<sz; i++){
                        if(visited[vec[x][i]]==0){
                            q.push(vec[x][i]);
                            res[vec[x][i]]= (res[x]==1)?2:1;
                            if(res[vec[x][i]]==1) ++o;
                            else ++t;
                            visited[vec[x][i]]=1;
                        }
                    }
                }
                chidori+=max(o,t);
            }
        }
        printf("Case %d: %d\n",++c,chidori);
    }
    return 0;
}
