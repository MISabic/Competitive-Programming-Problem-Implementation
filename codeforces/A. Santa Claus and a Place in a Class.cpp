#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,q,m,p,r,s,k,num;
    while(cin>>n>>m>>k){
        if(k%2==0) num=k/2;
        else num=(k+1)/2;
        long long rem=num%m;
        long long res=ceil(num/(double)m);
        if(k%2==0) cout<<res<<" "<<((rem==0)?m:rem)<<" "<<'R'<<endl;
        else cout<<res<<" "<<((rem==0)?m:rem)<<" "<<'L'<<endl;
    }
    return 0;
}
