#include<bits/stdc++.h>
#define ll long long
#define max 2000
#define mod 1000000007
using namespace std;

int arr[max];
vector<int>prime;

void sieve()
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

ll factorialDivisors(ll n)
{
    ll result = 1;
    for (int i=0; i<prime.size(); i++)
    {
        ll p=prime[i];
        ll exp=0;
        while(p<=n)
        {
            exp=exp+(n/p);
            p=p*prime[i];
        }
        result = ((result%mod)*((exp+1)%mod))%mod;
    }
    return result;
}

int main()
{
    sieve();
    ll n;
    while(cin>>n){
        cout <<factorialDivisors(n)<<endl;
    }
    return 0;
}
