#include<bits/stdc++.h>
using namespace std;

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};
int arr[100][100],visited[100][100];

bool val(int x,int y,int n)
{
    return (x>=0 && y>=0 && x<n && y<n);
}

int main()
{
    int n,x,y;
    char ch;
    while(cin>>n){
        int cnt=1;
        cin>>ch>>x>>y;
        if(ch=='e'){
            visited[x][y]=1;
            while(cnt<(n*n)){  //cout<<"now   "<<cnt<<endl;
                int flag=0;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (nx==x && ny>y)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 1"<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (nx!=x)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 2  "<<cnt<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (nx==x && ny<y)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 3"<<endl;
                if(flag==1) continue;

            }
        }

        if(ch=='w'){
            visited[x][y]=1;
            while(cnt<(n*n)){  //cout<<"now   "<<cnt<<endl;
                int flag=0;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (nx==x && ny<y)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 1"<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (nx!=x)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 2  "<<cnt<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (nx==x && ny>y)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 3"<<endl;
                if(flag==1) continue;

            }
        }

        if(ch=='s'){
            visited[x][y]=1;
            while(cnt<(n*n)){  //cout<<"now   "<<cnt<<endl;
                int flag=0;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (ny==y && nx>x)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 1"<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (ny!=y)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 2  "<<cnt<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (ny==y && nx<x)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 3"<<endl;
                if(flag==1) continue;

            }
        }

        if(ch=='n'){
            visited[x][y]=1;
            while(cnt<(n*n)){  //cout<<"now   "<<cnt<<endl;
                int flag=0;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (ny==y && nx<x)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 1"<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (ny!=y)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 2  "<<cnt<<endl;
                if(flag==1) continue;
                for(int i=0; i<4; i++){
                    int nx=x+fx[i];
                    int ny=y+fy[i];
                    if(val(nx,ny,n) && visited[nx][ny]==0 && (ny==y && nx>x)){
                        visited[nx][ny]=(++cnt);
                        x=nx;
                        y=ny;
                        flag=1;
                        break;
                    }
                }
                //cout<<"hello 3"<<endl;
                if(flag==1) continue;

            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
