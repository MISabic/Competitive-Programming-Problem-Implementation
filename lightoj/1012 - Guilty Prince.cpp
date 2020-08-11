#include<bits/stdc++.h>
using namespace std;

char arr[25][25];
int visited[25][25],cnt;

void traverse(int x,int y)
{
    ++cnt;
    arr[x][y]='#';
    if(arr[x+1][y]=='.') traverse(x+1,y);
    if(arr[x-1][y]=='.') traverse(x-1,y);
    if(arr[x][y+1]=='.') traverse(x,y+1);
    if(arr[x][y-1]=='.') traverse(x,y-1);
}

int main()
{
    int t,w,h,x,y;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>w>>h;
        memset(arr,'#',sizeof(arr));
        for(int j=1; j<=h; j++){
            for(int k=1; k<=w; k++){
                cin>>arr[j][k];
                if(arr[j][k]=='@') x=j,y=k;
            }
        }
        cnt=0;
        traverse(x,y);
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
    return 0;
}
