#include<bits/stdc++.h>
using namespace std;


int main()
{
    char arr[10000];
    long long t,n,k,cas=0;
    cin>>t;
    while(t--){
        memset(arr,'1',sizeof(arr));
        cin>> n >> k >> &arr[1000];
        long long c=0;
        for(int i=1000; i<strlen(arr); i++){
            for(int j=i-k; j<i; j++){
                if(arr[i]==arr[j]){
                    ++c;
                    break;
                }
            }
        }
        printf("Case %lld: %lld\n",++cas,c);
    }
    return 0;
}
