#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

long long arr[202020],cum[202020];

int main()
{
    long long t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    while(cin>>n>>m){
        cum[0]=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            cum[i]=cum[i-1]+arr[i];
        }
        for(int i=0; i<m; i++){
            cin>>r;
            long long ind = lower_bound(cum, cum+n, r) -cum;
            cout<<ind+1<<" "<<r-cum[ind-1]<<endl;
        }
    }
    return 0;
}
