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
    ll n,l,r,c,arr[10000];
    while(cin>>c){
        memset(arr,0,sizeof(arr));
        for(int i=1; i<=c; i++)
            cin>>arr[i];
        cin>>l>>r;
        int k=0;
        while(l!=r){
            if(l==arr[l]) break;
            l=arr[l];
            ++k;
            if(k>1000000) break;
        }
        if(l==r) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
