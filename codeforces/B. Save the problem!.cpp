#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100100],brr[100100];

int main()
{
    unordered_map<int,int>mp;
    ll cnt=1;
    for(int i=1; i<200500; i++){
        mp[i]=cnt;
        cnt+=2;
    }
    ll t,k,n,m,p,q,r,s;
    while(cin>>n){
        cout<<mp[n]<<" "<<2<<'\n'<<1<<" "<<2<<endl;
    }
    return 0;
}

