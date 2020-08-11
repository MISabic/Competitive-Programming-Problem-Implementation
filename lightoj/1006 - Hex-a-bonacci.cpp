#include<bits/stdc++.h>
#define mod 10000007
using namespace std;

long long arr[10005];
long long fn(long long n) {
    if(arr[n]!=-100000000000000) return arr[n]%mod;
    return arr[n] = (fn(n-1)%mod + fn(n-2)%mod + fn(n-3)%mod + fn(n-4)%mod + fn(n-5)%mod + fn(n-6)%mod)%mod;
}

int main()
{
    long long n, c=0;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>n;

        for(int i=6; i<=n; i++) arr[i]=-100000000000000;

        cout<<"Case "<< i << ": " << fn(n) <<endl;
    }
    return 0;
}
