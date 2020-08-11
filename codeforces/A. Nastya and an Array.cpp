#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[200200];

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    while(cin>>n){
        set<ll>st;
        for(int i=0; i<n; i++){
            cin>>k;
            if(k!=0) st.insert(k);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
