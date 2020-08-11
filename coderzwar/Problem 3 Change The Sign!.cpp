#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[10000];
    while(cin>>n){
        for(int i=0; i<3*n+1; i++){
            cin>>arr[i];
        }
        if(n==0){
            cout<<arr[0]<<endl;
            continue;
        }
        sort(arr,arr+(3*n+1));
        int sum=0,c=0;
        for(int i=0; i<3*n+1; i++){
            if(arr[i]<0)
                ++c;
        }
        int k=(c/n);
        int temp1=0,temp2=0;
        for(int i=0; i<n*k; i++){
            temp1+=abs(arr[i]);
        }
        if(c%n==0 || ((3*n+1)-(n*k))<n){        // 2    -1 -1 -1 -1 -1 -1 -1
            for(int i=n*k; i<3*n+1; i++)
                temp1+=arr[i];
            cout<<temp1<<endl;
        }
        else{
            temp2=temp1;
            for(int i=n*k; i<3*n+1; i++){
                temp1+=arr[i];
            }
            for(int i=n*k; i<n*k+n; i++)
                if(arr[i]<0) temp2+=abs(arr[i]);
                else temp2+=(arr[i]*(-1));
            for(int i=n*k+n; i<3*n+1; i++)
                temp2+=arr[i];
            cout<<max(temp1,temp2)<<endl;
        }
    }
    return 0;
}
