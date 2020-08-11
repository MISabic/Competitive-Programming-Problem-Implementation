#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[1111];
    while(cin>>n>>k){
        int res=0,keep=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        res=2*max(arr[0],k-arr[n-1]);
        for(int i=0; i<n-1; i++){
            res=max(res,arr[i+1]-arr[i]);
        }
        printf("%.10f\n",res/2.0);
    }
    return 0;
}
