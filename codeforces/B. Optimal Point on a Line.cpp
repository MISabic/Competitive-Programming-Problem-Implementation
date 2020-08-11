#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin);
#define ll long long
using namespace std;

int main()
{
    //read;
    ll n,k;
    vector<ll>vec;
    while(scanf("%I64d",&n)==1){
        for(int i=0; i<n; i++){
            scanf("%I64d",&k);
            vec.push_back(k);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[(vec.size()-1)/2]<<endl;
        vec.clear();
    }
    return 0;
}
