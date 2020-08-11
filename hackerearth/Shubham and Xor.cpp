#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    while(cin>>n){
        unordered_map<long long,long long>mp;
        long long cnt=0;
        for(int i=0; i<n; i++){
            cin>>k;
            cnt+=mp[k];
            ++mp[k];
        }
        cout<<cnt<<endl;
    }
    return 0;
}
