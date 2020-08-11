#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,v1=0,v2=0,k=0,arr[15];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j && arr[i]>arr[j])
                    ++v1;
                else if(i!=j && arr[i]<arr[j])
                    ++v2;
            }
            if(v1!=v2) v1=v2=0;
            else{
                printf("Case %d: %d\n",++k,arr[i]);
                break;
            }
        }
    }
    return 0;
}
