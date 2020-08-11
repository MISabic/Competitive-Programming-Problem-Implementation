#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[300005];
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n,greater<int>());
        long long sum=0,k=n;
        for(int i=0; i<n; i++)
            sum+=abs((k--)-arr[i]);
        printf("%I64d\n",sum);
    }
    return 0;
}
