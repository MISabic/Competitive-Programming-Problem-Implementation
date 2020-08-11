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
        for(int i=0; i<=n; i++){
            if((i*i)>=n){
                k=i;
                cnt=n-i;    //cout<<" hello "<<endl;
                break;
            }
        }
        ll rem=ceil(n/(double)k);
        ll res=k+k+rem+rem;
        cout<<res<<endl;
    }
    return 0;
}
