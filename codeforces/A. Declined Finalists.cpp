#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s,u,v,arr[100100];
    string str;
    double x,y;
    while(cin>>n){
        ll cnt=0,k=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll res=max(0LL,arr[n-1]-25LL);
        cout<<res<<endl;
    }
    return 0;
}

