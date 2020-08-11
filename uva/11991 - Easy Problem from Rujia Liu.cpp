#include<bits/stdc++.h>
using namespace std;

int n,m,k,v,arr[100005],track[1000005];

int main()
{
    while(scanf("%d %d",&n,&m)==2){
        memset(track,0,sizeof(track));
        map< int, map<int,int> >occur;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        for(int i=1; i<=n; i++){
            track[arr[i]]++;
            occur[track[arr[i]]][arr[i]]=i;
        }
        for(int i=0; i<m; i++){
            cin>>k>>v;
            cout<<occur[k][v]<<endl;
        }
    }
    return 0;
}
