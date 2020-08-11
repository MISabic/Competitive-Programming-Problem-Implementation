#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,arr[1005];
    cin>>t;
    while(t--){
        scanf("%d %d",&n,&k);
        int c=0;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]<=0) ++c;
        }
        (c>=k) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
    return 0;
}
