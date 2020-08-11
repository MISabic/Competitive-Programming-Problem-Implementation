#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,arr[100010];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int c=0;
        while(n!=1){
            n/=2;
            ++c;
        }
        cout<<c+1<<endl;
    }
    return 0;
}

