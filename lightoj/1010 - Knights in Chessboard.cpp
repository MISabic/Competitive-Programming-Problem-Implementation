#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,m;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n>>m;
        if(n==1 || m==1) cout<<"Case "<<i<<": "<<max(n,m)<<endl;
        else if(n==2 || m==2){
            int temp=((n*m)/8)*4;
            if((n*m)%8) temp+=min(4, (n*m)%8);
            cout<<"Case "<<i<<": "<<temp<<endl;
        }
        else cout<<"Case "<<i<<": "<<ceil((n*m)/2.0)<<endl;
    }
    return 0;
}
