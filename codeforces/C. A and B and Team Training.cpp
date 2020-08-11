#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    while(cin>>n>>m){
        long long mx=max(n,m),mn=min(n,m);
        if((mn*2)>mx) cout<<(mx+mn)/3<<endl;
        else if((mn*2)<=mx) cout<<mn<<endl;
    }
    return 0;
}
