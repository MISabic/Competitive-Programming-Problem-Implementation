#include<bits/stdc++.h>
using namespace std;

long long t,n,i,arr[100100];

int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        long long k=arr[0];
        for(int i=1; i<n; i++){
            k^=arr[i];
        }
        vector<long long>vec;
        for(int i=0; i<n; i++){
            long long temp=(k^arr[i]);
            vec.push_back(abs(temp-arr[i]));
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;
    }
    return 0;
}
