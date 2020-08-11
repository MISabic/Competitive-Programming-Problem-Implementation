#include<bits/stdc++.h>
using namespace std;

int fx[]={+1,-1,+2,-2,+1,+2,-2,-1};
int fy[]={-2,-2,-1,-1,+2,+1,+1,+2};

int value[10][10];

int valid(int x,int y)
{
    return (x<8 && x>=0 && y<8 && y>=0);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string src,dest;
        cin>>src>>dest;
        queue< pair<int,int> >q;
        q.push({8-(src[1]-'0'),src[0]-'a'});
        value[8-(src[1]-'0')][src[0]-'a']=1;
        while(!q.empty()){
            int x=q.front().first,y=q.front().second;
            q.pop();
            for(int i=0; i<8; i++){
                int nx=x+fx[i];
                int ny=y+fy[i];
                if(valid(nx,ny) && value[nx][ny]==0){
                    value[nx][ny]=value[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
        printf("%d\n",value[8-(dest[1]-'0')][dest[0]-'a']-1);
        memset(value,0,sizeof(value));
    }
    return 0;
}
