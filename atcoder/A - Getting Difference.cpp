#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    while(cin>>n>>k){
        int mx=0,g=0;
        for(int i=0; i<n; i++){
            cin>>x;
            g=__gcd(g,x);
            mx=max(mx,x);
        }
        if(k<=mx && k%g==0) cout<<"POSSIBLE"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
