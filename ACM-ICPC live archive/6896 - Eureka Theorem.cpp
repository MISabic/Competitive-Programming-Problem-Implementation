#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,u,v,arr[100100];
    for(int i=1; i<=45; i++)
        arr[i]=(i*(i+1))/2;
    cin>>t;
    while(t--){
        cin>>n;
        int res=0;
        for(int i=1; i<=45; i++){
            for(int j=1; j<=45; j++){
                for(int k=1; k<=45; k++){
                    if(arr[i]+arr[j]+arr[k]==n){
                        res=1;
                        break;
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
