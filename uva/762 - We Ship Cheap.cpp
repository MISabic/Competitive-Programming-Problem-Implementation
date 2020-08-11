#include<bits/stdc++.h>
#define read freopen("in.txt", "r", stdin)
#define write freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
    //read;
    //write;
    int n,flag=0;
    string u,v,src,dest;
    while(cin>>n){
        if(flag==0) flag=1;
        else cout<<endl;
        map< string,vector<string> >mp;
        map<string,string>res;
        map<string,int>visited;
        map<string,int>check;
        for(int i=0; i<n; i++){
            cin>>u>>v;
            if(u==v){
                mp[u].push_back(v);
            }
            else{
                mp[u].push_back(v);
                mp[v].push_back(u);
            }
        }
        cin>>src>>dest;
        if(src==dest){
            cout<<src<<" "<<src<<endl;
            continue;
        }
        queue<string>q;
        q.push(src);
        visited[src]=1;
        while(!q.empty()){
            string x=q.front();
            q.pop();
            for(int i=0; i<mp[x].size(); i++){
                if(!visited[mp[x][i]]){
                    visited[mp[x][i]]=1;
                    q.push(mp[x][i]);
                    res[mp[x][i]]=x;
                    check[mp[x][i]]=1;
                }
            }
        }
        if(check[dest]!=1)
            cout<<"No route"<<endl;
        else{
            stack<string>way;
            while(1){
                way.push(dest);
                if(dest==src) break;
                dest=res[dest];
            }
            while(way.size()!=1){
                cout<<way.top()<<" ";
                way.pop();
                cout<<way.top()<<endl;
            }
        }
    }
    return 0;
}
