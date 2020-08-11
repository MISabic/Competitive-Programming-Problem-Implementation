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
    map<string,int>mp;
    while(cin>>str){
        mp[str]++;
    }
    map<string,int>::iterator it=mp.begin();
    int mx=-1;
    for(it; it!=mp.end(); it++){
        if((it->si)>mx){
            mx=it->si;
            str=it->fi;
        }
    }
    cout<<str<<endl;
    return 0;
}


