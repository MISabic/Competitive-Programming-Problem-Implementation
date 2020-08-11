#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    ll n,a,b,c,d;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d;
        ll sum=0;
        for(ll i=a; i<=b; i++){
            if(i>=c && i<=d){
                sum+=(d-i);
            }
            else if(i<c){
                sum+=(d-c+1);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
