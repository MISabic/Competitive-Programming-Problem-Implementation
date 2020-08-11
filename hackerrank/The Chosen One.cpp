#include<bits/stdc++.h>
using namespace std;

long long arr[100100],pre[100100],suf[100100];

int main()
{
    long long n;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i==0) pre[i]=arr[i];
            else pre[i]=__gcd(pre[i-1],arr[i]);
        }
        if(n==1){
            cout<<arr[0]+1LL<<endl;
            continue;
        }
        suf[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--){
            suf[i]=__gcd(suf[i+1],arr[i]);
        }
        for(int i=0; i<n; i++){
            if(i==0){
                if(__gcd(suf[i+1],arr[i])!=suf[i+1]){
                    cout<<suf[i+1]<<endl;
                    break;
                }
            }
            else if(i==n-1){
                if(__gcd(pre[i-1],arr[i])!=pre[i-1]){
                    cout<<pre[i-1]<<endl;
                    break;
                }
            }
            else{
                long long g=__gcd(pre[i-1],suf[i+1]);
                if(__gcd(g,arr[i])!=g){
                    cout<<g<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
