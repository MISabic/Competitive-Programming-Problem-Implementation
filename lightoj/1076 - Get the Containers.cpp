#include<bits/stdc++.h>
using namespace std;

int c,n,m,arr[1005];

int container(int v)
{
    int total=0,cnt=0;
    for(int i=0; i<n; i++){
        if(total+arr[i]>v){
            ++cnt;
            total=arr[i];
        }
        else total+=arr[i];
    }
    if(total>0) ++cnt;
    return cnt;
}

int main()
{
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n>>m;
        int mx=0;
        for(int j=0; j<n; j++){
            cin>>arr[j];
            mx=max(mx,arr[j]);
        }
        int low=mx,high=1000000005,ans;
        while(low<high){
            int mid=(low+high)/2;
            if(container(mid)<=m){
                high=mid;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
