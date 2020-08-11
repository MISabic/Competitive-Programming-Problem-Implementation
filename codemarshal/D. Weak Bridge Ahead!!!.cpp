#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("out.txt","r",stdin)
#define rep(e,lv,n) for(int e=lv; e<n; e++)
#define debug cout<<"  hello  "<<endl
#define debug1(a,b) cout<<a<<"  hello  "<<b<<endl
#define debug2(a,b,c) cout<<a<<"  hello  "<<b<<"    "<<c<<endl
using namespace std;

int main()
{
    //read;
    ll t,n,m,r,p,k,q,a,b,c=0,arr[10100],brr[10100];
    cin>>t;
    while(t--){
        ll sum=0;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0; i<m; i++){
            cin>>brr[i];
            sum+=brr[i];
        }
        if(arr[n-1]>=brr[m-1]){//cout<<arr[n-1]<<"   "<<brr[n-1]<<"    "<<sum<<endl;
            sum-=arr[n-1];
        }
        else{
            sum-=brr[m-1];
        }
        cout<<"Case "<<++c<<": "<<sum<<endl;
    }
    return 0;
}










