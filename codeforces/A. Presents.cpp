#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,arr[105];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>x;
            arr[x]=i+1;
        }
        for(int i=1; i<=n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
