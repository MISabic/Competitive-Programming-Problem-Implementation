#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[100100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n*2; i++){
            cin>>arr[i];
        }
        sort(arr,arr+(n*2));
        cout<<arr[n+n/2]<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" "<<arr[n*2-i-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
