#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,arr[105];
    while(scanf("%I64d",&n)==1){
        for(int i=1; i<=n; i++)
            scanf("%I64d",&arr[i]);
        while(1){
            int flag=0;
            for(int i=1; i<n; i++){
                if(arr[i]>arr[i+1]){
                    flag=1;
                }
            }
            if(flag==0) break;
            for(int i=1; i<n; i++){
                if(arr[i]>arr[i+1]){
                    printf("%d %d\n",i,i+1);
                    swap(arr[i],arr[i+1]);
                }
            }
        }
    }
    return 0;
}
