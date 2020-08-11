#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long c,n;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        (__builtin_popcount(n)%2)?(cout<<"Case "<<i<<": odd"<<endl):(cout<<"Case "<<i<<": even"<<endl);
    }
    return 0;
}
