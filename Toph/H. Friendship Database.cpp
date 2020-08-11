#include<bits/stdc++.h>
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))
#define memc(a,c)       memset(a,'c',sizeof(a))
#define ll              long long
#define llu             long long unsigned int
#define pb              push_back
#define mkp             make_pair
#define P               pair<int,int>
#define fi              first
#define si              second
#define all(c)          (c).begin(),(c).end()
#define len(x)          x.length()
using namespace std;

int main()
{
    ll t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n>>m){
        map<P,int>mp;
        for(int i=0; i<m; i++){
            cin>>p>>q;
            if(mp[mkp(p,q)]==0 || mp[mkp(q,p)]==0){
                cout<<"new"<<endl;
                mp[mkp(p,q)]=1;
                mp[mkp(q,p)]=1;
            }
            else{
                cout<<"old"<<endl;
            }
        }
    }
    return 0;
}


