#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    cin>>t;
    while(t--){
        vector<int>vec[10101];
        cin>>n;
        for(int i=0; i<n-1; i++){
            cin>>u>>v;
            vec[u].push_back(v);
        }
        int c=0;
        for(int i=1; i<=n; i++){
            if(vec[i].size()==0) ++c;
        }
        cout<<c<<endl;
    }
    return 0;
}
