#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c,arr[100100];
    string str,ip;
    double x,y;
    map<string,string>mp;
    ll res=1;
    /*vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    while(cin>>n){
        ll tot=0,sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=n-1; i>=0; i-=2){
            if(i-1>=0){
                sum+=(arr[i]+arr[i-1]);
                tot=max(tot,sum);
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}
