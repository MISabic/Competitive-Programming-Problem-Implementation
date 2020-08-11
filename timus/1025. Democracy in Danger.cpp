#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105];
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int sum=0;
        for(int i=0; i<=n/2; i++){
            sum+=arr[i]/2+1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
