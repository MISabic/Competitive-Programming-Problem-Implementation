#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,k,t,src,dest,c=0,flag=0,visited[100],res[100];
    while(cin>>x){
        vector<int>vec[100];
        for(int j=0; j<x; j++){
            cin>>k;
            vec[1].push_back(k);
            vec[k].push_back(1);
        }
        for(int i=2; i<20; i++){
            cin>>x;
            for(int j=0; j<x; j++){
                cin>>k;
                vec[i].push_back(k);
                vec[k].push_back(i);
            }
        }
        cout<<"Test Set #"<<++c<<endl;
        cin>>t;
        for(int i=0; i<t; i++){
            cin>>src>>dest;
            if(src==dest){
                printf("%2d to %2d: %d\n",src,dest,0);
                continue;
            }
            memset(visited,0,sizeof(visited));
            memset(res,0,sizeof(res));
            queue<int>q;
            q.push(src);
            visited[src]=1;
            while(!q.empty()){
                x=q.front();
                q.pop();
                for(int i=0; i<vec[x].size(); i++){
                    if(visited[vec[x][i]]==0){
                        visited[vec[x][i]]=1;
                        q.push(vec[x][i]);
                        res[vec[x][i]]+=(res[x]+1);
                    }
                }
            }
            printf("%2d to %2d: %d\n",src,dest,res[dest]);
        }
        cout<<endl;
    }
    return 0;
}
