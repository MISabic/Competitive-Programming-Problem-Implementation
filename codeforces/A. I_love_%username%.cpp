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

    while(cin>>n){
        ll f=0,mx=99999999,mn=-1,c=0;
        for(int i=0; i<n; i++){
            cin>>l;
            if(f==0){
                f=1;
                mx=l,mn=l;
            }
            else{
                if(l>mx){
                    mx=l;
                    ++c;
                }
                if(l<mn){
                    mn=l;
                    ++c;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

