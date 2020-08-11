#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[5555];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>n){
        int o=0,sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<0) o+=arr[i];
            else sum+=arr[i];
        }
        if(o==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-o<<endl;
        }
    }
    return 0;
}
