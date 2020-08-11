#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100100];

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>k){
        ll cnt=0,chidori=0,total=0,flag=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<k; i++){
            cnt+=arr[i];
        }
        ll res=cnt/100;
        if(cnt%100!=0) ++res;
        cout<<res<<endl;
    }
    return 0;
}

