#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,m,p,q,r,k,u,v,arr[100100];
    string str;
    double x,y;
    while(cin>>n>>k){
        ll check[1111];
        memset(check,0,sizeof(check));
        for(int i=0; i<n; i++){
            cin>>arr[i];
            check[arr[i]]++;
        }
        int cnt=0;
        for(int i=0; i<=1000; i++){
            if(check[i]>=k) ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
