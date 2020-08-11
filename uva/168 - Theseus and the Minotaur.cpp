#include<bits/stdc++.h>
using namespace std;

int con,m,t,k,candles[300];
vector<int>adj[300];

void dfs(int m,int t)
{
    ++con;
    for(int i=0; i<adj[m].size(); i++){
        if(candles[adj[m][i]]==0 && adj[m][i]!=t){
            if(con==k){
                cout<<(char)(m+65)<<" ";
                candles[m]=1;
                con=0;
            }
            return dfs(adj[m][i],m);
        }
    }
    cout<<"/"<<(char)(m+65)<<endl;
}

int main()
{
    char ch,ph,str[500];
    while(scanf("%s",str)==1){
        if(str[0]=='#') break;

        for(int i=0; i<strlen(str); i++){
            if(str[i]=='.') break;
            int index=(int)(str[i])-65;
            for(i+=2; i<strlen(str); i++){
                if(str[i]==';' || str[i]=='.') break;
                if(str[i]==':') continue;
                adj[index].push_back((int)(str[i])-65);
            }
        }
        scanf(" %c %c %d",&ch,&ph,&k);
        con=0,m=(int)ch-65,t=(int)ph-65;

        dfs(m,t);

        memset(candles,0,sizeof(candles));
        for(int i=0; i<300; i++) adj[i].clear();
    }
    return 0;
}
