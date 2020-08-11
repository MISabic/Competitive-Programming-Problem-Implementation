#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll l,r,x,y,k,arr[100100];
    while(cin>>l>>r>>x>>y>>k){
        int flag=0;
        for(int i=x; i<=y; i++){
            ll keep=i*k;
            if(keep>=l && keep<=r){
                flag=1;
                break;
            }
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
}
