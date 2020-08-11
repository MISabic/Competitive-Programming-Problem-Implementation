#include<bits/stdc++.h>
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))
#define memc(a,c)       memset(a,'c',sizeof(a))
#define ll              long long
#define llu             long long unsigned int
#define pb              push_back
#define mkp             make_pair
#define P               pair<int,int>
#define fi              first
#define si              second
#define all(c)          (c).begin(),(c).end()
using namespace std;

int fx[]={+1,-1,0,0,+1,+1,-1,-1};
int fy[]={0,0,+1,-1,+1,-1,-1,+1};
int res[555][555],visited[555][555];

bool isValid(int n, int m, int x, int y)
{
    return (x<n && x>=0 && y<m && y>=0);
}

int t,n,m,arr[555][555];

int main()
{
    int n,m,k,x,y,su,sv;
    cin>>t;
    while(t--){
        mem0(visited);
        mem0(res);
        cin>>n>>m;
        queue<P>q;
        int mn=99999999,mx=-1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                mx=max(mx,arr[i][j]);
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==mx){
                    visited[i][j]=1;
                    q.push(mkp(i,j));
                    res[i][j]=0;
                }
            }
        }


        while(!q.empty()){
            x=q.front().fi;
            y=q.front().si;
            q.pop();
            for(int i=0; i<8; i++){
                if(isValid(n,m,x+fx[i],y+fy[i]) && visited[x+fx[i]][y+fy[i]]==0){
                    visited[x+fx[i]][y+fy[i]]=1;      //cout<<i<<"   "<<x+fxh[i]<<"  ::  "<<y+fyh[i]<<endl;
                    q.push(mkp(x+fx[i],y+fy[i]));
                    res[x+fx[i]][y+fy[i]]=res[x][y]+1;
                }
            }
        }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans=max(ans,res[i][j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

