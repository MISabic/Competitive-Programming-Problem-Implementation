#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,a,b,arr[100010];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>a>>b;
            if(b<arr[0]){
                cout<<n<<endl;
                continue;
            }
            else if(b>arr[n-1]){
                cout<<0<<endl;
                continue;
            }
            int val=upper_bound(arr,arr+n,b)-arr;
            int val1=lower_bound(arr,arr+n,b)-arr;
            if(a==0 && binary_search(arr,arr+n,b))
                cout<<n-val1<<endl;
            else if(a==0)
                cout<<n-val<<endl;
            else
                cout<<n-val<<endl;
        }
    }
    return 0;
}
