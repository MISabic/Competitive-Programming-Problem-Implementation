#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long c,n,m;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n>>m;
        cout<<"Case "<<i<<": "<<(n/2)*m<<endl;
    }
    return 0;
}
