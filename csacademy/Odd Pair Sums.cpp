#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    //cout<<(int)'z'<<endl;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<ll>vec;
        int mx=99999999,flag=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0 && flag==0){
                vec.pb(arr[i]);
                flag=1;
            }
            else if(arr[i]%2==0 && flag==1){
                vec.pb(arr[i]);
                flag=0;
            }
        }
        int sz=n-vec.size();
        mx=min(mx,sz);
        vec.clear();
        flag=1;
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0 && flag==0){
                vec.pb(arr[i]);
                flag=1;
            }
            else if(arr[i]%2==0 && flag==1){
                vec.pb(arr[i]);
                flag=0;
            }
        }
        sz=n-vec.size();
        mx=min(mx,sz);
        cout<<mx<<endl;
    }
    return 0;
}

