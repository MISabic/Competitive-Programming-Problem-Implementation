#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q,a,b,arr[100010];
    while(cin>>n>>q){
        arr[0]=0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            arr[i]+=arr[i-1];
        }
        for(int i=0; i<q; i++){
            cin>>a>>b;
            if((arr[b]-arr[a-1])%2==0)
                cout<<"Sim"<<endl;
            else
                cout<<"Nao"<<endl;
        }
    }
    return 0;
}
