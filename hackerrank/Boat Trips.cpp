#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,m,arr[1000];
    while(cin>>n>>c>>m){
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        if(arr[0]<=(c*m)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
