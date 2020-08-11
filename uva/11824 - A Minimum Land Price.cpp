#include <bits/stdc++.h>
using namespace std;

long long power(long long a,long long b){
    if(!b){return 1;}if(b%2){return a*power(a,b-1);}else {long long x=power(a,b/2);return x*x;}
}

int main()
{
    long long t,k;
    cin>>t;
    while(t--){
        vector<long long>vec;
        long long res=0,c=1,flag=0;
        while(cin>>k && k)
            vec.push_back(k);
        sort(vec.begin(),vec.end(),greater<long long>());
        for(int i=0; i<vec.size(); i++){
            res+=(2*power(vec[i],c));
            ++c;
            if(res>5000000){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"Too expensive"<<endl;
        else cout<<res<<endl;
    }
    return 0;
}

