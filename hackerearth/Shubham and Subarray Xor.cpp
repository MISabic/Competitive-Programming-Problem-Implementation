#include<bits/stdc++.h>
using namespace std;

long long arr[1000],s1[1000],s2[1000];

int main()
{
    long long n,k;
    while(cin>>n){
        cin>>arr[0];
        s1[0]=arr[0];
        for(int i=1; i<n; i++){
            cin>>arr[i];
            s1[i]+=(s1[i-1]+arr[i]);
        }
        long long res=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                for(int k=i; k<j; k++){
                    res=max(res,(s1[i])^(s1[j]-s1[k]));
                    res=max(res,(arr[i])^(s1[j]-s1[k]));
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
