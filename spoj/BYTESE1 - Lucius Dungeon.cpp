#include<bits/stdc++.h>
#define P pair<int,int>
#define mx 100000000

using namespace std;

int x[]={+1,-1,0,0};
int y[]={0,0,+1,-1};

int t,m,n,a,b,amountOfTime,arr[1005][1005], dist[1005][1005];

bool isValid(int n, int m, int x, int y)
{
    return (x<n && x>=0 && y<m && y>=0);
}

struct edge
{
    P v;
    int w;
    edge(){}
    edge(P to, int weight){
        v=to, w=weight;
    }
    bool operator<(edge e)const{
        return w>e.w;
    }
};

void dijkstra(int n,int m,int s1,int s2)
{
    priority_queue<edge>pq;
    pq.push(edge(make_pair(s1,s2),arr[s1][s2]));
    dist[s1][s2]=arr[s1][s2];   // or dist[s1][s2]=0

    while(!pq.empty()){
        int u=pq.top().v.first, v=pq.top().v.second, w=pq.top().w;
        pq.pop();
        for(int i=0; i<4; i++){
            if(isValid(n,m,u+x[i],v+y[i]) && w+arr[u+x[i]][v+y[i]]<dist[u+x[i]][v+y[i]]){
                dist[u+x[i]][v+y[i]]=w+arr[u+x[i]][v+y[i]];
                pq.push(edge(make_pair(u+x[i],v+y[i]), dist[u+x[i]][v+y[i]]));
            }
        }
    }
    if(dist[a-1][b-1]<=amountOfTime)
        printf("YES\n%d\n",amountOfTime-dist[a-1][b-1]);
    else
        printf("NO\n");
}

int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d",&arr[i][j]);
                dist[i][j]=mx;
            }
        }
        scanf("%d %d %d",&a,&b,&amountOfTime);
        dijkstra(m,n,0,0);
    }
    return 0;
}
