#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c,arr[1010],checker[1010];
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
        ll tot=0,ok=0;
        arr[0]=0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        ll cnt=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(arr[j]==j){
                    ++cnt;
                }
            }
            tot=max(tot,cnt);
            cnt=0;
            ll keep=arr[n];
            for(int j=n; j>1; j--){
                arr[j]=arr[j-1];
            }
            arr[1]=keep;
            //for(int j=1; j<=n; j++) cout<<arr[j]<<" ";
            //cout<<endl;
        }
        cout<<tot<<endl;
    }
    return 0;
}
