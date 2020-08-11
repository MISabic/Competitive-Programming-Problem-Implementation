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
    while(cin>>n>>l>>r){
        int mn=9999999;
        for(int i=min(n,min(l,r)); i<=max(n,max(l,r))+10; i++){
            int val=abs(n-i)+abs(l-i)+abs(r-i);
            if(val<mn){
                mn=val;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
