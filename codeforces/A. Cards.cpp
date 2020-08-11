#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105];
    while(cin>>n){
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int v=sum/(n/2);
        for(int i=0; i<n; i++){
            if(arr[i]!=-1){
                int k=abs(v-arr[i]);
                for(int j=i+1; j<n; j++){
                    if(arr[j]==k){
                        cout<<i+1<<" "<<j+1<<endl;
                        arr[j]=-1;
                        break;
                    }
                }
                arr[i]=-1;
            }
        }
    }
    return 0;
}
