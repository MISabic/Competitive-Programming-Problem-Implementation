#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,fx[]={-1,1,0,0},fy[]={0,0,-1,1};
    char ch,arr[150][150];
    while(scanf("%d %d %c",&n,&m,&ch)==3){
        memset(arr,'.',sizeof(arr));
        for(int i=1; i<=n; i++){
            scanf("%s",&arr[i][1]);
            arr[i][m+1]='.';
        }
        int f=0,c=0,r1,c1,r2,c2;
        for(int i=1; i<=n+1; i++){
            for(int j=1; j<=m+1; j++){
                if(arr[i][j]==ch){
                    r1=j,c1=i;
                    for(int k=j+1; k<=m+1; k++){
                        if(arr[i][k]!=ch){
                            r2=k-1;
                            f=1;
                            break;
                        }
                    }
                    for(int k=i+1; k<=n+1; k++){
                        if(arr[k][j]!=ch){
                            c2=k-1;
                            f=1;
                            break;
                        }
                    }
                }
                if(f==1) break;
            }
            if(f==1) break;
        }
        map<char,int>mp;
        int count=0;
        for(int i=c1; i<=c2; i++){
            for(int j=r1; j<=r2; j++){
                for(int d=0; d<4; d++){
                    char ph=arr[i+fx[d]][j+fy[d]];
                    if(ph!=ch && ph!='.' && !mp[ph]){
                        mp[ph]++;
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
        mp.clear();
    }
    return 0;
}
