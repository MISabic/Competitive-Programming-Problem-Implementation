#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,q,t,k,d,arr[100100];
    while(cin>>n>>q){
        memset(arr,0,sizeof(arr));
        for(int i=0; i<q; i++){
            cin>>t>>k>>d;
            ll v=0,x=0;
            for(int i=1; i<=n; i++)
                if(arr[i]<t)
                    ++x;
            if(x>=k){
                x=0;
                for(int i=1; i<=n; i++){
                    if(x<k && arr[i]<t){
                        arr[i]=t+d-1;
                        ++x;
                        v+=i;
                    }
                }
                cout<<v<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
