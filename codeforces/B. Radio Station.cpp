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
    while(cin>>n>>m){
        ll tot=0,ok=0;
        for(int i=0; i<n; i++){
            cin>>str>>ip;
            mp[ip]=str;
        }
        for(int i=0; i<m; i++){
            cin>>str>>ip;
            if(ip[ip.length()-1]==';'){
                cout<<str<<" "<<ip<<" #"<<ip.substr(0,ip.length()-1)<<endl;
            }
        }
    }
    return 0;
}
