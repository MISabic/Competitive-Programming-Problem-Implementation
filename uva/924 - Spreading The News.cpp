#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,f,q,visited[5000],res[5000],ans[5000];
    while(cin>>t){
        vector<int>vec[5000];
        for(int i=0; i<t; i++){
            cin>>k;
            for(int j=0; j<k; j++){
                cin>>f;
                vec[i].push_back(f);
            }
        }
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>q;
            memset(visited,0,sizeof(visited));
            memset(res,0,sizeof(res));
            memset(ans,0,sizeof(ans));
            int c=0;
            queue<int>Q;
            Q.push(q);
            visited[q]=1;
            while(!Q.empty()){
                int x=Q.front();
                Q.pop();
                for(int j=0; j<vec[x].size(); j++){
                    if(visited[vec[x][j]]==0){
                        visited[vec[x][j]]=1;
                        res[vec[x][j]]=res[x]+1;
                        Q.push(vec[x][j]);
                    }
                }
            }
            int mx=0,day;
            for(int i=0; i<t; i++){
                ans[res[i]]++;
            }
            for(int i=1; i<=t+1; i++){
                if(ans[i]>mx){
                    mx=ans[i];
                    day=i;
                }
            }
            if(mx==0)
                cout<<0<<endl;
            else
                cout<<mx<<" "<<day<<endl;
        }
    }
    return 0;
}
