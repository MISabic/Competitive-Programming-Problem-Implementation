#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,arr[1000];
    while(cin>>n>>m){
        for(int i=0; i<m; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>a>>b;
            int cnt=0;
            for(int j=0; j<m; j++){
                if(arr[j]>=a && arr[j]<=b) ++cnt;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
