#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
using namespace std;

ll mod(long long b,long long p)
{
    long long int ret;
    if(p==0)
        return 1;
    if(p%2==0)
    {
        ret=mod(b,p/2);
        return ((ret)*(ret));
    }
    else
        return ((b)*(mod(b,(p-1))));
}

int main()
{
    ll n,t,p,q,c=0,r,k,s,arr[100000];
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll val1=mod(10,n)-1;
        ll val2=mod(10,n-1)-1;
        cout<<(val1/k)-(val2/k)<<endl;
    }
    return 0;
}


