#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k,x[1005],y[1005],res[1005];
    string str;
    while(cin>>n){
        res[n]=1LL;
        for(int i=1; i<=n; i++) cin>>x[i];
        for(int i=1; i<=n; i++) cin>>y[i];
        for(int j=1; j<n; j++){
            long long mx=1,height=x[j],pos=y[j];
            for(int i=j+1; i<=n; i++){
                if(height>(y[i]-pos)){
                    ++mx;
                    long long test=height-(y[i]-pos);
                    if(test<x[i]){
                        height=x[i];
                        pos=y[i];
                    }
                }
            }
            res[j]=mx;
        }
        cin>>m;
        for(int i=0; i<m; i++){
            cin>>k;
            cout<<res[k]<<endl;
        }
    }
    return 0;
}
