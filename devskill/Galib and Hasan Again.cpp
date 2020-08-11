#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,r,a,k,c=0;
    cin>>n;
    while(n--)
    {
        cin>>r>>a;
        k=(4*r*r)-(a*a);
        printf("Case %lld: %lld\n",++c,k);
    }
    return 0;
}
