#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll check[100100],arr[50];

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    string str,ip;
    double x,y;
    map<ll,ll>mp;
    ll res=1;
    /*vector<ll>vec;
    for(int i=0; res<1e15; i++){
        res*=2;
        vec.pb(res);
    }*/
    arr[0]=1,arr[1]=1;
    check[0]=check[1]=1;
    for(int i=2; i<20; i++){
        arr[i]=arr[i-1]+arr[i-2];
        check[arr[i]]=1;
        cout<<arr[i]<<endl;
    }
    while(cin>>n){
        for(int i=1; i<=n; i++){
            if(check[i]==1){
                cout<<'O';
            }
            else cout<<'o';
        }
        cout<<endl;
    }
    return 0;
}

