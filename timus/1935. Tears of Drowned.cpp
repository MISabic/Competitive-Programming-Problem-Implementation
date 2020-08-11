#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[1000];
    while(cin>>n){
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr,arr+n);
        int cnt=arr[0]+arr[n-1];
        for(int i=1; i<n; i++) cnt+=(max(arr[i-1],arr[i]));
        cout<<cnt<<endl;
    }
    return 0;
}
