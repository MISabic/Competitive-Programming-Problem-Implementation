#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,arr[100100];
    while(scanf("%I64d",&n)==1){
        for(int i=0; i<n; i++){
            scanf("%I64d",&arr[i]);
        }
        sort(arr,arr+n);
        int k=1;
        for(int i=0; i<n; i++){
            if(arr[i]>=k){
                ++k;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
