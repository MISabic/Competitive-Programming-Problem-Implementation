#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,u,v,arr[100100];
    arr[1]=arr[2]=arr[3]=1,arr[4]=arr[5]=2;
    for(int i=6; i<=105; i++)
        arr[i]=arr[i-1]+arr[i-5];
    cin>>t;
    while(t--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
