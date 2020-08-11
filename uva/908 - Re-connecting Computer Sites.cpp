#include<bits/stdc++.h>
#define mkp make_pair
#define ll long long
using namespace std;

struct data{
    int src;
    int w;
    data(int s,int weight){
        src=s,w=weight;
    }
    bool operator<(data p)const{
        return w>p.w;
    }
};

vector<int>vec[1000010];
vector<int>vec1[1000010];
int visited[1000100];
map< pair<ll,ll>,ll >mp1;
map< pair<ll,ll>,ll >mp2;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ll n,m,k,wi,c=0,x,y,w,flag=0;
    while(cin>>n){
        if(flag==1) cout<<endl;
        else flag=1;
        for(int i=0; i<n-1; i++){
            cin>>x>>y>>w;
            if(x!=y){
                vec[x].push_back(y);
                vec[y].push_back(x);
                vec1[x].push_back(y);
                vec1[y].push_back(x);
                if(mp1[mkp(x,y)]==0){
                    mp1[mkp(x,y)]=w;
                    mp1[mkp(y,x)]=w;
                    mp2[mkp(x,y)]=w;
                    mp2[mkp(y,x)]=w;
                }
                else if(w<mp1[mkp(x,y)]){
                    mp1[mkp(x,y)]=w;
                    mp1[mkp(y,x)]=w;
                    mp2[mkp(x,y)]=w;
                    mp2[mkp(y,x)]=w;
                }
            }
        }

        cin>>k;

        for(int i=0; i<k; i++){
            cin>>x>>y>>w;
            if(x!=y){
                if(mp2[mkp(x,y)]==0){
                    vec1[x].push_back(y);
                    vec1[y].push_back(x);
                    mp2[mkp(x,y)]=w;
                    mp2[mkp(y,x)]=w;
                }
                else if(w<mp2[mkp(x,y)]){
                    mp2[mkp(x,y)]=w;
                    mp2[mkp(y,x)]=w;
                }
            }
        }

        cin>>m;

        for(int i=0; i<m; i++){
            cin>>x>>y>>w;
            if(x!=y){
                /** got a WA cause i was inserting value in mp2 while checking mp1 condition
                    that's why i compared mp1 & mp2 values separately
                */
                if(mp1[mkp(x,y)]==0){
                    vec[x].push_back(y);
                    vec[y].push_back(x);
                    mp1[mkp(x,y)]=w;
                    mp1[mkp(y,x)]=w;
                }
                else if(w<mp1[mkp(x,y)]){
                    mp1[mkp(x,y)]=w;
                    mp1[mkp(y,x)]=w;
                }

                if(mp2[mkp(x,y)]==0){
                    vec1[x].push_back(y);
                    vec1[y].push_back(x);
                    mp2[mkp(x,y)]=w;
                    mp2[mkp(y,x)]=w;
                }
                else if(w<mp2[mkp(x,y)]){
                    mp2[mkp(x,y)]=w;
                    mp2[mkp(y,x)]=w;
                }
            }
        }

        // input ends here

        memset(visited,0,sizeof(visited));

        priority_queue<data>pq;
        pq.push(data(1,0));
        ll res1=0;
        while(!pq.empty()){     //cout<<pq.top().src<<"     "<<pq.top().w<<endl;

            int x=pq.top().src,val=pq.top().w,sz=vec[x].size();
            pq.pop();
            if(visited[x]==0) res1+=val;
            visited[x]=1;
            for(int i=0; i<sz; i++){
                if(visited[vec[x][i]]==0){//cout<<x<<"   i'm here   "<<vec[x][i]<<endl;
                    pq.push(data(vec[x][i],mp1[mkp(x,vec[x][i])]));
                }
            }
        }

        cout<<res1<<endl;


        memset(visited,0,sizeof(visited));

        priority_queue<data>pq1;
        pq1.push(data(1,0));
        ll res2=0;
        while(!pq1.empty()){     //cout<<pq1.top().src<<"     "<<pq1.top().w<<endl;

            int x=pq1.top().src,val=pq1.top().w,sz=vec1[x].size();
            pq1.pop();
            if(visited[x]==0) res2+=val;
            visited[x]=1;
            for(int i=0; i<sz; i++){
                if(visited[vec1[x][i]]==0){     //cout<<x<<"   i'm here   "<<vec1[x][i]<<"     "<<mp2[mkp(x,vec1[x][i])]<<endl;
                    pq1.push(data(vec1[x][i],mp2[mkp(x,vec1[x][i])]));
                }
            }
        }

        cout<<res2<<endl;
        for(int i=0; i<=n; i++)
            vec[i].clear(),vec1[i].clear();
        mp1.clear();
        mp2.clear();

    }
    return 0;
}
