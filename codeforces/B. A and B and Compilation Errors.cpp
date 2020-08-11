#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int n,l,r,c=0;

int main()
{
    //read;
    //write;
    map<ll,ll>mp1;
    map<ll,ll>mp2;
    map<ll,ll>mp3;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>l;
            mp1[l]++;
        }
        for(int i=0; i<n-1; i++){
            cin>>l;
            mp2[l]++;
        }
        map<ll,ll>::iterator it=mp1.begin();
        for(it; it!=mp1.end(); it++){
            if(it->si!=mp2[it->fi]){
                cout<<it->fi<<endl;
                break;
            }
        }
        for(int i=0; i<n-2; i++){
            cin>>l;
            mp3[l]++;
        }
        map<ll,ll>::iterator it1=mp2.begin();
        for(it1; it1!=mp2.end(); it1++){
            if(it1->si!=mp3[it1->fi]){
                cout<<it1->fi<<endl;
                break;
            }
        }
        mp1.clear(),mp2.clear(),mp3.clear();
    }
    return 0;
}


