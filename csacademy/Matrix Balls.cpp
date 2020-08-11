#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define db(x) cout<<"val :: "<<x<<endl
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
using namespace std;

int arr[550][550];
int fxh[]={+1,-1,0,0,+1,+1,-1,-1};
int fyh[]={0,0,+1,-1,+1,-1,-1,+1};

bool isValid(int n, int m, int x, int y)
{
    return (x<=n && x>0 && y<=m && y>0);
}

int par[500010],sz[500010];

int finder(int x)
{
    if(par[x]==x) return x;
    return par[x]=finder(par[x]);
}

void unioner(int a,int b)
{
    int para,parb;
    para=finder(a);
    parb=finder(b);
    par[para]=parb;
    //++sz[para];
}

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>n>>m){
        int check=1e19,ind=0,highest=-1;
        vector<int>vec;
        unordered_map<int,int>mp;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>arr[i][j];
                highest=max(highest,arr[i][j]);
                vec.push_back(arr[i][j]);
            }
        }
        for(int i=0; i<=highest; i++)     // important part - initialization
            par[i]=i;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int mn=arr[i][j];
                for(int k=0; k<8; k++){
                    if(isValid(n,m,i+fxh[k],j+fyh[k])){
                        mn=min(mn,arr[i+fxh[k]][j+fyh[k]]);
                    }
                }
                unioner(arr[i][j],mn);
            }
        }
        for(int i=0; i<vec.size(); i++){
            ++mp[finder(vec[i])];
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<mp[arr[i][j]]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
