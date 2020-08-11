#include<bits/stdc++.h>
using namespace std;

int t,n,k,arr[1005];

int walking_done(int v)
{
    int cnt=0,total=0;
    for(int i=0; i<=n; i++){
        if(total+arr[i]>v){
            ++cnt;
            total=arr[i];
        }
        else{
            total+=arr[i];
        }
    }
    if(total>0){
        ++cnt;
    }
    return cnt;
}

int main()
{
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>k;
        int mx=0;
        for(int j=0; j<=n; j++){
            cin>>arr[j];
            mx=max(mx,arr[j]);
        }
        //cout<<" "<<mx<<endl;
        int low=mx,high=100100000,ans;
        while(low<high){
            int mid=(low+high)/2;
            int cnt=walking_done(mid);

            if(cnt<=k+1){
                ans=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }

        }
        cout<<"Case "<<i<<": "<<ans<<endl;
        int total,chk=n-k;
        for(int j=0; j<=n; j++){
            if(chk>0){
                if(j==0){
                    total=arr[j];
                    continue;
                }
                if(total+arr[j]>ans){
                    cout<<total<<endl;
                    total=arr[j];
                }
                else{
                    total+=arr[j]; //cout<<arr[j]<<" "<<total<<endl;
                    --chk;
                    if(chk==0) cout<<total<<endl;
                }
            }
            else{
                cout<<arr[j]<<endl;
            }
        }
    }
    return 0;
}
