#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105];
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0; i<n; i++) cout<<arr[i]<<" ";
        printf("\n");
    }
    return 0;
}
