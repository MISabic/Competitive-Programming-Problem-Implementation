#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,arr[1000],brr[1000];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n==1) cout<<arr[0]*2<<" "<<1<<endl;
        else if(arr[0]==arr[1]) cout<<arr[0]<<" "<<n<<endl;
        else{
            if(arr[0]*2<=arr[1])
                cout<<arr[0]*2<<" "<<1<<endl;
            else{
                long long c=0;
                for(int i=0; i<n; i++){
                    if(arr[1]==arr[i])
                        ++c;
                }
                cout<<arr[1]<<" "<<c<<endl;
            }
        }
    }
    return 0;
}
