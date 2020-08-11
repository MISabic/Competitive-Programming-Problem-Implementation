#include<bits/stdc++.h>
using namespace std;

int res[300300];

int main()
{
    int n,k,x;
    priority_queue< pair<int,int> >pq;
    while(cin>>n>>k){
        for(int i=1; i<=k; i++){
            cin>>x;
            pq.push(make_pair(x,i));
        }
        long long cnt=0,i;
        for(i=k+1; i<=n; i++){
            cin>>x;
            pq.push(make_pair(x,i));
            cnt+=(i-pq.top().second)*pq.top().first;
            res[pq.top().second]=i;
            pq.pop();
        }
        while(!pq.empty()){
            cnt+=(i-pq.top().second)*pq.top().first;
            res[pq.top().second]=i;
            pq.pop();
            ++i;
        }
        cout<<cnt<<endl;
        for(int i=1; i<=n; i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
