#include<bits/stdc++.h>
#define ll long long
#define read freopen("in.txt","r",stdin)
using namespace std;

int main()
{
    //read;
    ll n,arr[100010],m,brr[100010];
    scanf("%lld",&n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }
    sort(brr,brr+m);
    ll i,j=0,p=1,sum=0;
    for(i=0; i<m; i++){
        ll val=brr[i]-p;//cout<<"  j  "<<val<<endl;
        for(j; j<n; j++){
            sum+=min(arr[j],val);
            if(val==0) break;
            val--;
        }
        p=brr[i];
    }//cout<<brr[m-1]<<endl;
    for(i=brr[m-1]-1; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
