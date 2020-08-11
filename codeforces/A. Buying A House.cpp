#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll t,n,m,k,a,b,c,p,q,r,s,u,v,arr[100100];
    string str;
    while(cin>>n>>m>>k){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        ll res=999999999999999;
        for(int i=0; i<m-1; i++){
            if(arr[i]!=0 && arr[i]<=k && res>(abs(m-i-1))*10){  //cout<<"  1  "<<i<<endl;
                res=(abs(m-i-1))*10;
            }
        }
        for(int i=m; i<n; i++){
            if(arr[i]!=0 && arr[i]<=k && res>(i-(m-1))*10){  //cout<<"  2  "<<i<<endl;
                res=(i-(m-1))*10;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

