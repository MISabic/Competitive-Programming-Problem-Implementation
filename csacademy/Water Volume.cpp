#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,a,b,x,y,t;
    while(cin>>n){
        int tot=0,mx=0,mn=INFINITY,res=0,now=-1;
        for(int i=0; i<n; i++){
            cin>>x>>t;
            if(x==0){
                tot+=t;
                mx=max(mx,tot);
            }
            else{
                tot-=t;
                mn=min(mn,tot);
            }
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}

