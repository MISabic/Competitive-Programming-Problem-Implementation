#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,arr[100010];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long c=0,sum=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                sum+=(c*(c+1))/2;
                c=0;
            }
            else{
                ++c;
            }
        }
        sum+=(c*(c+1))/2;
        cout<<sum<<endl;
    }
    return 0;
}
