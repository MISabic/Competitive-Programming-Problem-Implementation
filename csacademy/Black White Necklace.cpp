#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100100];
    while(cin>>n){
        arr[0]=0;
        int numOfOnes=0,cnt=0,checker=0,k=0,ans=9999999;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            numOfOnes+=arr[i];
        }
        for(int i=1; i<=n; i++){
            if(i>=numOfOnes){
                k+=arr[i];
                //cout<<numOfOnes<<"   "<<k<<"  ::  "<<numOfOnes-k<<endl;
                ans=min(ans,numOfOnes-k);
                k-=arr[i-numOfOnes+1];
            }
            else{
                k+=arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
