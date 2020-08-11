#include<bits/stdc++.h>
using namespace std;

long long combination(long long n,long long r)
{
    long long res=1;
    for(long long i=1; i<=r; i++)
        res=(res*(n-r+i))/i;
    return res;
}

int main()
{
    long long n,r,res;
    while(cin>>n>>r && (n || r)){
        r=min(r,n-r);
        cout<<combination(n,r)<<endl;
    }
    return 0;
}
