#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("out.txt","r",stdin)
//#define write freopen("out.out","w",stdout)
using namespace std;

ll arr[100100];

int main()
{
    //read;
    //write;
    ll l1,r1,l2,r2,k;
    map<ll,int>mp;
    while(cin>>l1>>r1>>l2>>r2>>k){
        ll a=max(l1,l2);
        ll b=min(r1,r2);
        ll sum=(b-a)+1;
        if(k<=b && k>=a) sum--;
        cout<<max(0LL,sum)<<endl;
    }
    return 0;
}


