#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,t,k,m,p,q,r,s,x,y,arr[100100],brr[100100];
    string str;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        ll cnt=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((arr[i]+arr[j])%2!=0){
                    ++cnt;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
