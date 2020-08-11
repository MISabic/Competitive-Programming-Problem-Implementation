#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[105];
    while(scanf("%d",&n)==1){
        int sum1=0;
        for(i=0; i<n; i++){
            cin>>arr[i];
            sum1+=arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int sum2=0;
        for(i=0; i<n; i++){
            if(sum2>sum1-sum2) break;
            sum2+=arr[i];
        }

        cout<<i<<endl;
    }
    return 0;
}
