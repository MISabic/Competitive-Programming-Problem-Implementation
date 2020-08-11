#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define rep(e,lv,n) for(int e=lv; e<n; e++)
#define debug cout<<"  hello  "<<endl
#define debug1(a,b) cout<<a<<"  hello  "<<b<<endl
#define debug2(a,b,c) cout<<a<<"  hello  "<<b<<"    "<<c<<endl
using namespace std;

int main()
{
    ll a,b,c,arr[100010];
    string str;
    while(cin>>a>>b){
        for(int i=0; i<a; i++){
            cin>>arr[i];
        }
        ll con=1;
        for(int i=1; i<a; i++){
            if(arr[i]-arr[i-1]<=b){
                con++;
            }
            else con=1;
        }
        cout<<con<<endl;
    }
    return 0;
}







