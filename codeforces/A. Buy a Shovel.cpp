#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    ll n,l,r,c=0;
    while(cin>>l>>r){
        for(int i=1; ; i++){
            ll res=i*l;
            if(res%10==0 || res%10==r){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
