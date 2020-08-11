#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,n,m,k,p,q,r,s,a,b,c;
    while(cin>>n){
        ll check=1e19,flag=0,ind=0,res=0,ans=0,ok=0;
        set<ll>st;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        ll cnt=0;
        for(int i=1; i<n; i++){
            if(arr[i]!=arr[i+1] && arr[i]!=0){
                ++cnt;
            }
        }
        if(arr[n]!=0) ++cnt;
        cout<<cnt<<endl;
    }
    return 0;
}
