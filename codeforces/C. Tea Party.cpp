#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c,arr[1000],ans[1000];
    while(cin>>n>>k){
        memset(ans,0,sizeof(ans));
        pair<int,int>pi[111];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            c=ceil(arr[i]/2.0);
            k-=c;
            ans[i]=c;
            pi[i]=make_pair(arr[i],i);
        }
        sort(pi,pi+n,greater< pair<int,int> >());

        int con=0,flag=0;

        if(k<0){
            cout<<-1<<endl;
            continue;
        }

        for(int i=0; i<n; i++){
            int x=min(pi[i].first-ans[pi[i].second],k);
            ans[pi[i].second]+=x;
            k-=x;
            if(k==0) break;
        }

        if(k>0) cout<<-1<<endl;
        else{
            for(int i=0; i<n; i++) cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
