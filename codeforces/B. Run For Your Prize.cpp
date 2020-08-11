#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,q,r,s,a,b,c;
    string str,ip;
    double x,y;
    map<string,string>mp;
    /*ll res=1;
    vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    while(cin>>n){
        ll f,s,pos1=1,pos2=1000000;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        f=0,s=n-1;
        ll i=1,res=0;
        while(n){
            if((arr[f]-pos1)<=(pos2-arr[s])){
                --n;
                res+=(arr[f]-pos1);
                pos2=pos2-(arr[f]-pos1);
                pos1=arr[f];
                ++f;    //cout<<"hello  "<<pos1<<"   "<<pos2<<endl;
            }
            else if((arr[f]-pos1)>(pos2-arr[s])){   //cout<<"jello"<<endl;
                --n;
                res+=(pos2-arr[s]);
                pos1=pos1+(pos2-arr[s]);
                pos2=arr[s];
                --s;
            }
            //cout<<res<<endl;
        }
        cout<<res<<endl;
    }
    return 0;
}
