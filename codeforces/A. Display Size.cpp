#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    while(cin>>n){
        if(n==1){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        long long mn=INFINITY;
        for(int i=1; i<=n/2; i++){
            long long k=n/i;
            double check=n/(double)i;
            if(k==check && abs(k-i)<mn){
                a=k,b=i;
                mn=abs(k-i);
            }
        }
        cout<<min(a,b)<<" "<<max(a,b)<<endl;
    }
    return 0;
}
