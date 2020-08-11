#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
using namespace std;

int main()
{
    ll n,t,p,q,c=0,r,k,s,arr[100000];
    double a,b;
    map<ll,ll>mp;
    arr[1]=1,arr[2]=2;
    mp[1]=1,mp[2]=2;
    for(int i=3; i<=55; i++){
        arr[i]=arr[i-1]+arr[i-2];
        mp[arr[i]]=i;
    }
    //cout<<arr[50]<<endl;
    while(cin>>n){
        if(mp[n]==1)
            printf("Showmic brings %lld chocolate on 1st day.\n",n,mp[n]);
        else if(mp[n]==2)
            printf("Showmic brings %lld chocolates on 2nd day.\n",n,mp[n]);
        else if(mp[n]==3)
            printf("Showmic brings %lld chocolates on 3rd day.\n",n,mp[n]);
        else
            printf("Showmic brings %lld chocolates on %lldth day.\n",n,mp[n]);
    }
    return 0;
}

