#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[5555];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>n){
        ll check=1e19,flag=0,ind,res;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<=n; i++){
            if(arr[arr[arr[i]]]==i && i!=arr[i] && arr[i]!=arr[arr[i]] && arr[arr[i]]!=arr[arr[arr[i]]]){
                flag=1;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
