#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k,p,q,arr[100100];
    string a,b,c,d;
    cin>>t;
    while(t--){
        map<string,int>mp;
        cin>>a>>b>>c>>d;
        mp[a]=mp[b]=mp[c]=mp[d]=1;
        cin>>a>>b>>c>>d;
        if((mp[a]+mp[b]+mp[c]+mp[d])>=2) cout<<"similar"<<endl;
        else cout<<"dissimilar"<<endl;
    }
    return 0;
}
