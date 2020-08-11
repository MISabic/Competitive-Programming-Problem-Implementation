#include<bits/stdc++.h>
using namespace std;

int par[100010],sz[100010];

int finder(int x)
{
    if(par[x]==x) return x;
    return par[x]=finder(par[x]);
}

void unioner(int a,int b)       // based on set size
{
    int para,parb;
    para=finder(a);
    parb=finder(b);
    if(para==parb)
    {
        return;
    }
    if(sz[para]==sz[parb])
    {
        par[parb]=para;
        sz[para]+=sz[parb]+1;
    }
    else if(sz[parb]>sz[para])
    {
        par[para]=parb;
        sz[parb]+=sz[para]+1;
    }
    else if(sz[para]>sz[parb])
    {
        par[parb]=para;
        sz[para]+=sz[parb]+1;
    }
}

int main()
{
    int n,m,a,b;
    while(cin>>n>>m){
        //memset(sz,0,sizeof(sz));
        for(int i=0; i<=n; i++)     // important part - initialization
            par[i]=i;
        for(int i=0; i<m; i++){
            cin>>a>>b;
            unioner(a,b);
        }
        for(int i=1; i<=n; i++)
            cout<<sz[finder(i)]<<" ";
        cout<<endl;
    }
    return 0;
}
