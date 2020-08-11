#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100000],brr[100000];
    while(cin>>n){
        int a,b,c=0,d=0,dis=0,mn,ind,f=0;
        for(int i=0; i<n; i++){
            cin>>arr[i]>>brr[i];
            c+=arr[i],d+=brr[i];
        }
        mn=abs(c-d);
        for(int i=0; i<n; i++){
            int k1=c-arr[i]+brr[i];
            int k2=d-brr[i]+arr[i];
            if(abs(k1-k2)>mn){
                a=arr[i];
                b=brr[i];
                mn=abs(k1-k2);
                ind=i+1;
                f=1;
            }
        }
        if(f==0)
            cout<<0<<endl;
        else
            cout<<ind<<endl;
    }
    return 0;
}
