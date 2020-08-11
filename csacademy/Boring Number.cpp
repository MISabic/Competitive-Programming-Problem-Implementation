#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,s,u,v,arr[200200];
    string str;
    while(cin>>n){
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        double res,mean=sum/(double)n,mn=99999999.0;
        //cout<<mean<<endl;
        for(int i=0; i<n; i++){
            if(abs(mean-arr[i])<mn){
                mn=abs(mean-arr[i]);
                res=i+1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
