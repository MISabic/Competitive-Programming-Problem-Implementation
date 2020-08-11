#include<bits/stdc++.h>
using namespace std;

int trailing_zeros(int n)
{
    int cnt=0;
    while(n){
        cnt+=n/5;
        n/=5;
    }
    return cnt;
}

int main()
{
    int c,n;
    cin>>c;

    for(int i=1; i<=c; i++){
        cin>>n;
        int low=1,high=1000000000,ans=0;
        while(low<high){
            int mid=(low+high)/2;
            int zeros=trailing_zeros(mid);
            if(zeros==n){
                ans=mid;
            }
            if(zeros>=n)
                high=mid;
            else
                low=mid+1;

            //cout<<low<<" "<<high<<" "<<mid<<" "<<trailing_zeros(mid)<<endl;
        }
        if(ans) cout<<"Case "<<i<<": "<<ans<<endl;
        else cout<<"Case "<<i<<": impossible"<<endl;
    }
    return 0;
}
