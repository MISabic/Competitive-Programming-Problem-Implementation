#include<bits/stdc++.h>
#define mem0(a) memset(a,0,sizeof(a))
#define P pair<int,int>
#define mkp make_pair
#define fi first
#define si second
using namespace std;

int fxh[]={+1,-1,+2,-2,+1,+2,-2,-1};
int fyh[]={-2,-2,-1,-1,+2,+1,+1,+2};

bool isValid(int n, int m, int x, int y)
{
    return (x<=n && x>0 && y<=m && y>0);
}

int main()
{
    int su,sv,eu,ev,res[100][100],visited[100][100];
    char ch,ph;
    while(cin>>ch>>sv>>ph>>ev){
        su=(int)ch-96;
        eu=(int)ph-96;
        queue<P>q;
        mem0(visited);
        mem0(res);
        visited[su][sv]=1;
        q.push(mkp(su,sv));
        while(!q.empty()){
            int x=q.front().fi;
            int y=q.front().si;
            q.pop();
            for(int i=0; i<8; i++){
                if(isValid(8,8,x+fxh[i],y+fyh[i]) && visited[x+fxh[i]][y+fyh[i]]==0){
                    visited[x+fxh[i]][y+fyh[i]]=1;
                    q.push(mkp(x+fxh[i],y+fyh[i]));
                    res[x+fxh[i]][y+fyh[i]]=res[x][y]+1;
                }
            }
        }
        printf("To get from %c%d to %c%d takes %d knight moves.\n",ch,sv,ph,ev,res[eu][ev]);
    }
}
