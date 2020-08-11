#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long k,m,n,p,q,r,s,t,u,v,arr[100200];
    double x,y;
    string str;
    while(cin>>n>>k){
        ll sum=0,c=n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        while(round(sum/(double)n)!=k){
            sum+=k;
            ++n;
        }
        n-=c;
        cout<<n<<endl;
    }
    return 0;
}
