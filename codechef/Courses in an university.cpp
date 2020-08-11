#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,arr[100100];
    cin>>t;
    while(t--){
        cin>>n;
        int res=0;
        for(int i=0; i<n; i++){
            cin>>k;
            res=max(res,k);
        }
        cout<<n-res<<endl;
    }
    return 0;
}
