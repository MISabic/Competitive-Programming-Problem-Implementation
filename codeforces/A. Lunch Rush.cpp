#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,f,t;
    while(cin>>n>>k){
        long long mx=-999999999999999;
        for(int i=0; i<n; i++){
            cin>>f>>t;
            if(t>k) mx=max(mx,f-(t-k));
            else mx=max(mx,f);
        }
        cout<<mx<<endl;
    }
    return 0;
}
