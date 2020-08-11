#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,k,s,arr[100100];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]>=m) cout<<0<<endl;
        else cout<<m-arr[0]<<endl;
    }
    return 0;
}
