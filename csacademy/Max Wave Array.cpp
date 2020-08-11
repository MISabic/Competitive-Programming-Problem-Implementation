#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<long long>());
        for(int i=1; i<n-1; i+=2){
            swap(arr[i],arr[i+1]);
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

