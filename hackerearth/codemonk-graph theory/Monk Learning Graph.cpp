#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,x,y,arr[1010];
    while(cin>>n>>m>>k){
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        map< int,vector< pair<int,int> > > mp;
        for(int i=0; i<m; i++){
            cin>>x>>y;
            mp[x].push_back(make_pair(arr[y],y));
            mp[y].push_back(make_pair(arr[x],x));
        }
        map< int,vector< pair<int,int> > >::iterator it=mp.begin();
        for(it; it!=mp.end(); it++){
            sort((it->second).begin(),(it->second).end(),greater< pair<int,int> >());
        }
        for(int i=1; i<=n; i++){
            if(mp[i].size()<k)
                cout<<-1<<endl;
            else
                cout<<mp[i][k-1].second<<endl;
        }
    }
    return 0;
}
