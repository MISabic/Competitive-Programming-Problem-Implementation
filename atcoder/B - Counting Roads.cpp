#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int a,b,c,n,m,r,k,p,arr[100100];

int main()
{
    while(cin>>n>>m){
        vector<int>vec[10000];
        for(int i=0; i<m; i++){
            cin>>a>>b;
            vec[a].pb(b);
            vec[b].pb(a);
        }
        for(int i=1; i<=n; i++){
            cout<<vec[i].size()<<endl;
        }
    }
}

