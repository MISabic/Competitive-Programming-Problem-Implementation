#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,mx,arr[100100];
    while(cin>>n>>l>>r){
        map<int,int>mp;
        long long res=0;
        mx=0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            mx=max(mx,mp[arr[i]]);
            mp[arr[i]]=i;
            res+=max(0,min(i-mx,r)-l+1);
        }
        cout<<res<<endl;
    }
    return 0;
}
