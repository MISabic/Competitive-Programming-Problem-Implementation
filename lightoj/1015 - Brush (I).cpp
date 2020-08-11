#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,k,res;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        res=0;
        for(int j=0; j<n; j++){
            cin>>k;
            res+=max(0,k);
        }
        cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
