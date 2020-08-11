#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

long long n,r,m,k,p;

int main()
{
    while(cin>>r>>m>>k){
        cin>>n;
        long long ans=0;
        for(int i=0; i<n; i++){
            cin>>p;
            if(p>m && p<k) ++ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
