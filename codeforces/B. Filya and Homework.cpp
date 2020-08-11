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
    ll n,k,l,r;
    map<ll,int>mp;
    while(cin>>k){
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }
        for(int i=0; i<k; i++){
            mp[arr[i]]++;
        }
        if(mp.size()==3){
            map<ll,int>::iterator it=mp.begin();
            ll ab[5],ch[5],c=0;
            for(it; it!=mp.end(); it++){
                ab[c++]=it->first;
            }
            if((ab[1]-ab[0]==ab[2]-ab[1])){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else if(mp.size()==1 || mp.size()==2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        mp.clear();
    }
    return 0;
}

