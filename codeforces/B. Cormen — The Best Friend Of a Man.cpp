#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,c=0,arr[1000];
    while(cin>>l>>r){
        for(int i=0; i<l; i++)
            cin>>arr[i];
        int res=0;
        for(int i=1; i<l; i++){
            int a=arr[i]+arr[i-1];
            if(a<r){
                res+=(r-a);
                arr[i]+=(r-a);
            }
        }
        cout<<res<<endl;
        for(int i=0; i<l; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
