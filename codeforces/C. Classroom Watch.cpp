#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll sod(ll n)
{
    ll k=n,sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    //cout<<"   "<<sum<<endl;
    return sum+k;
}

ll nod(ll n)
{
    ll k=n,sum=0;
    while(n){
        ++sum;
        n/=10;
    }
    //cout<<"   "<<sum<<endl;
    return sum;
}

set<ll>st[100000];

int main()
{
    ll t,k,n,m,p,q,r,s;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n){
        ll cnt=0,chidori=0;

        //cout<<nod(n)<<endl;
        ll range1=max(0LL,n-nod(n)*9),range2=n+nod(n)*9;
        set<ll>st;
        //cout<<range1<<"  "<<range2<<endl;
        for(ll i=range1; i<=range2; i++){
            if(sod(i)==n){
                st.insert(i);
            }
        }
        cout<<st.size()<<endl;
        for(auto x:st){
            cout<<x<<endl;
        }

        /*if(chidori==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;*/
    }
    return 0;
}
