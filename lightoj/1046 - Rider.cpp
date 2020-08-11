#include<bits/stdc++.h>
using namespace std;

int t,m,n;
int fx[]={-1,+1,-2,+2,-2,+2,-1,+1};
int fy[]={+2,+2,+1,+1,-1,-1,-2,-2};

bool valid(int x,int y)
{
    return (x>=0 && x<m && y>=0 && y<n);
}

int main()
{
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&m,&n);
        char arr[m+2][n+2];
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                scanf(" %c",&arr[j][k]);
            }
        }

        int ok=0,res=10000000;

        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){

                int chk[m+2][n+2],visited[m+2][n+2];
                memset(chk,-1,sizeof(chk));
                memset(visited,0,sizeof(visited));

                queue<tuple<int,int,int>>q;
                q.push({j,k,0});
                chk[j][k]=0;
                visited[j][k]=1;
                while(!q.empty()){
                    tuple<int,int,int> p=q.front();
                    q.pop();
                    for(int l=0; l<8; l++){
                        int x=get<0>(p)+fx[l];
                        int y=get<1>(p)+fy[l];
                        int v=get<2>(p);
                        //cout<<x<<" "<<y<<" "<<v<<endl;
                        if(valid(x,y) && !visited[x][y]){
                            visited[x][y]=1;
                            chk[x][y]=v+1;
                            q.push({x,y,v+1});
                        }
                    }
                }

                int flag=0,total=0;
                for(int j=0; j<m; j++){
                    for(int k=0; k<n; k++){
                        if(arr[j][k]!='.' && chk[j][k]==-1){
                            flag=1;
                            break;
                        }
                        else if(arr[j][k]!='.' && chk[j][k]!=-1){
                            if(chk[j][k]!=0)
                                total+=(chk[j][k]/(arr[j][k]-'0'))+!(!((chk[j][k]%(arr[j][k]-'0'))!=0));
                        }
                    }
                    if(flag) break;
                }
                if(!flag){
                    ok=1;
                    res=min(res,total);
                }
            }
        }
        if(ok){
            printf("Case %d: %d\n",i,res);
        }
        else{
            printf("Case %d: -1\n",i);
        }
    }
    return 0;
}
