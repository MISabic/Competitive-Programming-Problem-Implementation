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
    while(cin>>n>>str){
        ll tot=0,sum=0,flag0=0,flag1=0;
        for(int i=0; i<n; i++){
            if(str[i]=='0') flag0=1;
            if(str[i]=='1') flag1=1;
        }
        //cout<<flag0<<"   "<<flag1<<endl;
        if(flag0==1 && flag1==0){
            cout<<0<<endl;
        }
        else if(flag0==0 && flag1==1){
            cout<<1<<endl;
        }
        else if(str[n-1]=='0') cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
