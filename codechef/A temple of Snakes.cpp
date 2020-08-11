#include<bits/stdc++.h>
using namespace std;

long long t,n,c,mn,arr[100100],fromleft[100100],fromright[100100];

int main()
{
    cin>>t;
    while(t--){
        long long sum=0,res=9999999999999999;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        fromleft[0]=1,fromright[n-1]=1;
        for(int i=1; i<n; i++){
            if(arr[i]>fromleft[i-1]){
                fromleft[i]=fromleft[i-1]+1;
            }
            else{
                fromleft[i]=arr[i];
            }
        }
        for(int i=n-2; i>=0; i--){  //cout<<arr[i]<<"    "<<c<<endl;
            if(arr[i]>fromright[i+1]){
                fromright[i]=fromright[i+1]+1;
            }
            else{
                fromright[i]=arr[i];
            }
        }
        for(int i=0; i<n; i++){     //cout<<i<<"  ::  "<<fromleft[i]<<"    "<<fromright[i]<<endl;
            mn=min(fromleft[i],fromright[i]);
            res=min(res,sum-(mn*mn));
        }
        cout<<res<<endl;
    }
    return 0;
}
