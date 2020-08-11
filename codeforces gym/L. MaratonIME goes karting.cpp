#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,arr[100010];
    while(cin>>n){
        map<long long,long long>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]=i+1;
        }
        sort(arr,arr+n);
        if(n!=1 && arr[n-1]==arr[n-2]){
            cout<<-1<<endl;
            continue;
        }
        cout<<mp[arr[n-1]]<<endl;
    }
    return 0;
}


