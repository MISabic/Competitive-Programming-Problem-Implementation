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

int fxh[]={+1,0};
int fyh[]={0,+1};
int arr[400][400],cat[1010][1010],res[1010][1010],visited[1010][1010];

bool isValid(int n, int m, int x, int y)
{
    return (x<n && x>=0 && y<m && y>=0);
}

int main()
{
    int t,n,m,k,q,r,s,a,b,c;
    while(cin>>n>>m){
        int check=1e19,ind,ans=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>arr[i][j];
            }
        }
        for(int j=m; j>0; j--){
            for(int i=n; i>0; i--){
                if(arr[i][j]!=0){
                    res[i][j]=res[i+1][j]+arr[i][j];
                }
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(arr[i][j]!=0){
                    cat[i][j]=cat[i][j-1]+arr[i][j];
                }
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(ans<=cat[i][j]+res[i][j]-1 && cat[i][j]-1>0 && res[i][j]-1>0){
                    ans=max(ans,cat[i][j]+res[i][j]-1);
                    //cout<<i<<"  "<<j<<endl;
                }
                //cout<<cat[i][j];
            }
            //cout<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
