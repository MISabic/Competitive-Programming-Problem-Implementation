#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,arr[2500];
    while(cin>>n>>k){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int cnt=0,num=0;
        for(int i=0; i<n; i++){
            if(5-arr[i]>=k){
                ++num;
            }
            if(num==3){
                ++cnt;
                num=0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
