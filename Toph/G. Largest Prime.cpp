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
#define max 10100
using namespace std;

int arr[max];
vector<int>prime;

void seive()
{
    memset(arr,0,sizeof(arr));
    int sqrtn=(int)sqrt(max);
    for(int i=3; i<=sqrtn; i+=2)
    {
        if(arr[i]==0){
            for(int j=i*i; j<max; j+=i+i){
                arr[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<max; i+=2){
        if(arr[i]==0)
            prime.push_back(i);
    }
}

int main()
{
    seive();
    ll t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    map<string,int>mp;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>p>>q;
        ll r=upper_bound(prime.begin(),prime.end(),q)-prime.begin();
        if(prime[r-1]<p || (p==1 && q==1))
            cout<<-1<<endl;
        else
            cout<<prime[r-1]<<endl;
    }
    return 0;
}


