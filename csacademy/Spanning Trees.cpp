#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k){
        if(n==1) cout<<0<<endl;
        else if((n==2 || n==3) && k==0){
            cout<<-1<<endl;
        }
        else{
            cout<<(n-1+n-1-k)<<endl;
            for(int i=1; i<n; i++){
                cout<<i<<" "<<i+1<<" "<<i<<endl;
            }
            //cout<<n-1-k<<endl;
            k=n-1-k;
            for(int i=1; i<=min(k,n-2); i++){
                cout<<n<<" "<<i<<" "<<n+i-1<<endl;
            }
            if(k==n-1) cout<<n-1<<" "<<1<<" "<<n+k-1<<endl;
        }
    }
    return 0;
}
