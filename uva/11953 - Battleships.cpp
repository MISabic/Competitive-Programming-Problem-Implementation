#include<bits/stdc++.h>
using namespace std;

int t,n,c=0;
char arr[111][111];

bool isValid(int n, int x, int y)
{
    return (x<n && x>=0 && y<n && y>=0);
}

void floodfill(int x,int y)
{
    if(arr[x][y]=='x' || arr[x][y]=='@') arr[x][y]='.';
    else return ;
    if(isValid(n,x+1,y)) floodfill(x+1,y);
    if(isValid(n,x-1,y)) floodfill(x-1,y);
    if(isValid(n,x,y+1)) floodfill(x,y+1);
    if(isValid(n,x,y-1)) floodfill(x,y-1);
}

int main()
{
    scanf("%d",&t);
    while(t--){
        scanf(" %d ",&n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf(" %c",&arr[i][j]);
            }
        }
        int res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j]=='x'){
                    ++res;
                    floodfill(i,j);
                }
            }
        }
        printf("Case %d: %d\n",++c,res);
    }
    return 0;
}
