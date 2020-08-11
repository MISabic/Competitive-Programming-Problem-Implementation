#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    double x,y;
    while(cin>>n>>k){
        map<ll,ll>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ++mp[arr[i]];
        }
        sort(arr,arr+n);
        if(k==0){
            if(arr[0]==1){
                cout<<-1<<endl;
            }
            else{
                cout<<arr[0]-1<<endl;
            }
            continue;
        }

        map<ll,ll>::iterator it=mp.begin();
        ll sum=0,ok=0;
        for(it; it!=mp.end(); it++){
            sum+=it->second;   //cout<<sum<<" "<<it->first<<"  "<<it->second<<endl;
            if((it->first)>1000000000){
                cout<<-1<<endl;
                ok=1;
                break;
            }
            if(sum==k){
                cout<<it->first<<endl;
                ok=1;
                break;
            }
            else if(sum>k){
                cout<<-1<<endl;
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<-1<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    double x,y;
    while(cin>>n>>k){
        map<ll,ll>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ++mp[arr[i]];
        }
        sort(arr,arr+n);
        ll sum=0;
        for(int i=0; i<n; i++){
            sum+=mp[arr[i]];
            if(sum==k){
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}*/
