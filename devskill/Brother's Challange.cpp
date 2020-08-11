#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
#define fi first
#define si second
using namespace std;

int main()
{
    ll n,m,k,p,q,arr[10000];
    string str;
    while(cin>>n){
        ll sum=0;
        for(int i=1; i<n; i++){
            if(i%3==0 || i%5==0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
