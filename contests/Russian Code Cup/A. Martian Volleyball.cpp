#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,x,y,arr[100100];
    string str;
    cin>>t;
    while(t--){
        cin>>k>>x>>y;
        if(x>=k && abs(x-y)>=2) cout<<0<<endl;
        else if(x>=k && abs(x-y)<2) cout<< 2-abs(x-y) <<endl;
        else if(y>=k && abs(x-y)>=2) cout<<0<<endl;
        else if(y>=k && abs(x-y)<2) cout<< 2-abs(x-y) <<endl;
        else{
            u=max(x,y);
            v=min(x,y);
            p=k-u;
            if(k-v>=2) cout<<p<<endl;
            else cout<<p+(2-(k-v))<<endl;
        }
    }
    return 0;
}
