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

int fx1[]={+1,-1,0,0};
int fy1[]={0,0,+1,-1};
int arr[1010][1010],visited[1010][1010],visited2[1010][1010],res[1010][1010],chk[1010][1010];

bool isValid(int n, int m, int x, int y)
{
    return (x<n && x>=0 && y<m && y>=0);
}

int main()
{
    int n,m,bombs,numberofbombs,k,x,y,su,sv,eu,ev;
    while(cin>>n>>m){
        mem0(res);
        mem0(visited);
        mem0(visited2);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        k=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==1 && visited[i][j]==0){
                    ++k;
                    queue<P>q;
                    visited[i][j]=1;
                    q.push(mkp(i,j));
                    int con=0;
                    while(!q.empty()){
                        x=q.front().fi;
                        y=q.front().si;
                        q.pop();
                        ++con;
                        for(int i=0; i<4; i++){
                            if(isValid(n,m,x+fx1[i],y+fy1[i]) && arr[x+fx1[i]][y+fy1[i]]==1 && visited[x+fx1[i]][y+fy1[i]]==0){
                                visited[x+fx1[i]][y+fy1[i]]=1;      //cout<<i<<"   "<<x+fxh[i]<<"  ::  "<<y+fyh[i]<<endl;
                                q.push(mkp(x+fx1[i],y+fy1[i]));
                                //res[x+fx1[i]][y+fy1[i]]=res[x][y]+1;
                            }
                        }
                    }


                    visited2[i][j]=1;
                    res[i][j]=con;
                    chk[i][j]=k;
                    q.push(mkp(i,j));
                    while(!q.empty()){
                        x=q.front().fi;
                        y=q.front().si;
                        q.pop();
                        for(int i=0; i<4; i++){
                            if(isValid(n,m,x+fx1[i],y+fy1[i]) && arr[x+fx1[i]][y+fy1[i]]==1 && visited2[x+fx1[i]][y+fy1[i]]==0){
                                visited2[x+fx1[i]][y+fy1[i]]=1;      //cout<<i<<"   "<<x+fxh[i]<<"  ::  "<<y+fyh[i]<<endl;
                                q.push(mkp(x+fx1[i],y+fy1[i]));
                                res[x+fx1[i]][y+fy1[i]]=con;
                                chk[x+fx1[i]][y+fy1[i]]=k;
                            }
                        }
                    }
                    //cout<<con<<endl;
                }
            }
        }

        priority_queue<int>pq;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(res[i][j]==0){
                    int ans=res[i][j]+1;
                    map<int,int>mp;
                    if(i-1>=0){
                        ans+=res[i-1][j];
                        //mp[mkp(i-1,j)]=1;
                        mp[chk[i-1][j]]=1;
                    }
                    if(i+1<n && mp[chk[i+1][j]]!=1){
                        ans+=res[i+1][j];
                        //mp[mkp(i+1,j)]=1;
                        mp[chk[i+1][j]]=1;
                    }
                    if(j-1>=0 && mp[chk[i][j-1]]!=1){
                        ans+=res[i][j-1];
                        mp[chk[i][j-1]]=1;
                    }
                    if(j+1<m && mp[chk[i][j+1]]!=1){
                        ans+=res[i][j+1];
                        mp[chk[i][j+1]]=1;
                    }
                    pq.push(ans);
                    //cout<<ans<<endl;
                }
            }
        }
        cout<<pq.top()<<endl;

    }
    return 0;
}

