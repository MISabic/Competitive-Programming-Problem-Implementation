#include<bits/stdc++.h>
using namespace std;

struct point{
    double x,y,dist;
    int ind;
    point(){}
    point(int i,double a,double b,double d){
        ind=i,x=a,y=b,dist=d;
    }
    bool operator<(point p)const{
        return dist>p.dist;
    }
};

int main()
{
    int t,n;
    double x[150],y[150];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x[i]>>y[i];
        }
        int visited[150];
        double res=0;
        memset(visited,0,sizeof(visited));
        priority_queue<point>pq;
        pq.push(point(0,x[0],y[0],0));
        while(!pq.empty()){
            point p=pq.top();
            pq.pop();
            if(visited[p.ind]!=0) continue;
            res+=p.dist;
            visited[p.ind]=1;
            for(int i=0; i<n; i++){
                if(visited[i]==0){
                    double sd=sqrt((p.x-x[i])*(p.x-x[i])+(p.y-y[i])*(p.y-y[i]));
                    pq.push(point(i,x[i],y[i],sd));
                }
            }
        }
        printf("%.2f\n",res);
        if(t!=0) cout<<'\n';
    }
    return 0;
}




