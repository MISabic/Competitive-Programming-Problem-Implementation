#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100010];
    while(cin>>n){
        for(int i=0; i<n; i++)
        cin>>arr[i];
        for(int i=0; i<n-1; i++)
            printf("%d ",arr[i]+arr[i+1]);
        printf("%d\n",arr[n-1]);
    }
    return 0;
}
