#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k;
    while(cin>>n>>k){
        unsigned long long lim=0,ind=0,res=1;
        for(unsigned long long i=0; res*2<=n; i++) res*=2;
        --res;
        if(k==1) cout<<n<<endl;
        else{
            if(res+1<=n) cout<<(res^(res+1))<<endl;
            else cout<<res<<endl;
        }
    }
    return 0;
}
