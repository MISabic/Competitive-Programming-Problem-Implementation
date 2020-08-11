#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    while(cin>>n>>k){
        long long mn,mx;
        if(n==1 || (n==k) || k==0){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(k>(n/3)){
            cout<<1<<" "<<(n-k)<<endl;
            continue;
        }
        long long res=k*2;
        cout<<1<<" "<<res<<endl;
    }
    return 0;
}
