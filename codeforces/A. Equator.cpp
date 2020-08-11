#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>n){
        int o=0,sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sum=ceil(sum/2.0);
        for(int i=0; i<n; i++){
            o+=arr[i];
            if(o>=sum){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
