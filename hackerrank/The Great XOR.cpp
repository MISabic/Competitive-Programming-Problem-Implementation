#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long q,x;
    vector<long long>vec;
    for(long long i=0; i<35; i++){
        long long keep=(2LL<<i)-1LL;
        vec.push_back(keep);
    }
    int i;
    cin>>q;
    while(q--){
        cin>>x;
        for(i=0; i<vec.size(); i++){
            if(vec[i]>=x) break;
        }
        if(x==1) cout<<0<<endl;
        else{
            long long res=(x-(x-vec[i-1]-1)*2-1);
            cout<<res<<endl;
        }
    }
    return 0;
}
