#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<utility>
#include<queue>

using namespace std;

int fx2[]={+1,-1,0,0};
int fy2[]={0,0,+1,-1};

bool isValid(int n, int m, int x, int y)
{
    return ((x<n && x>=0) && (y<m && y>=0))?true:false;
}

int res[185][185],visited[185][185];
char arr[185][185];

int main()
{
    int t,n,m,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<185; i++){
            for(int j=0; j<185; j++){
                res[i][j]=9999999;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]=='1'){
                    //memset(visited,0,sizeof(visited));
                    for(int k=0; k<n; k++){
                        for(int l=0; l<m; l++){
                            visited[k][l]=0;
                        }
                    }
                    queue< pair<int,int> >q;
                    q.push(make_pair(i,j));
                    res[i][j]=0;
                    int k1=i,k2=j;
                    while(!q.empty()){
                        x=q.front().first;
                        y=q.front().second;
                        q.pop();
                        for(int k=0; k<4; k++){
                            if(isValid(n,m,x+fx2[k],y+fy2[k])==true && visited[x+fx2[k]][y+fy2[k]]==0 && arr[x+fx2[k]][y+fy2[k]]=='0'){
                                q.push(make_pair(x+fx2[k],y+fy2[k]));
                                visited[x+fx2[k]][y+fy2[k]]=1;
                                res[x+fx2[k]][y+fy2[k]]=min(res[x+fx2[k]][y+fy2[k]],abs(x+fx2[k]-k1)+abs(y+fy2[k]-k2));
                            }
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(res[i][j]==9999999)
                    cout<<0<<" ";
                else
                    cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
