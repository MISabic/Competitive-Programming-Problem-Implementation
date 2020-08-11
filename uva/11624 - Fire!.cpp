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

char arr[1010][1010];
int fire[1010][1010],visited[1010][1010],qvisited[1010][1010],res[1010][1010],cal[1010][1010];
int fx1[]={+1,-1,0,0};
int fy1[]={0,0,+1,-1};

bool isValid(int n, int m, int x, int y)
{
    return (x<n && x>=0 && y<m && y>=0);
}

int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        queue<P>fq,q;
        P src;
        mem0(visited);
        mem0(qvisited);
        mem0(res);
        mem0(cal);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='F'){
                    fq.push(mkp(i,j));
                    res[i][j]=1;
                    visited[i][j]=1;
                    qvisited[i][j]=1;
                }
                else if(arr[i][j]=='J'){
                    src=mkp(i,j);
                    cal[i][j]=1;
                    q.push(src);
                }
                else if(arr[i][j]=='#'){
                    visited[i][j]=1;
                    qvisited[i][j]=1;
                }
            }
        }
        while(!fq.empty()){
            int x=fq.front().fi;
            int y=fq.front().si;
            fq.pop();
            for(int i=0; i<4; i++){
                if(isValid(n,m,x+fx1[i],y+fy1[i]) && visited[x+fx1[i]][y+fy1[i]]==0){
                    visited[x+fx1[i]][y+fy1[i]]=1;
                    fq.push(mkp(x+fx1[i],y+fy1[i]));
                    res[x+fx1[i]][y+fy1[i]]=res[x][y]+1;
                }
            }
        }
        int flag=0;
        qvisited[q.front().fi][q.front().si]=1;
        while(!q.empty()){
            int x=q.front().fi;
            int y=q.front().si;
            q.pop();
            for(int i=0; i<4; i++){
                if(!isValid(n,m,x+fx1[i],y+fy1[i])){
                    cout<<cal[x][y]<<endl;
                    flag=1;
                    break;
                }
                if(isValid(n,m,x+fx1[i],y+fy1[i]) && qvisited[x+fx1[i]][y+fy1[i]]==0 && (res[x+fx1[i]][y+fy1[i]]>cal[x][y]+1 || res[x+fx1[i]][y+fy1[i]]==0)){
                    qvisited[x+fx1[i]][y+fy1[i]]=1;
                    q.push(mkp(x+fx1[i],y+fy1[i]));
                    cal[x+fx1[i]][y+fy1[i]]=cal[x][y]+1;
                }
            }
            if(flag==1) break;
        }
        /*for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<qvisited[i][j];
            }
            cout<<endl;
        }*/
        if(flag==0) cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
