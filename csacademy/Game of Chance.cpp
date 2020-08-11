#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,a,b,x,y,arr[10000],brr[10000];
    while(cin>>n>>a>>b){
        for(int i=0; i<n; i++){
            cin>>x;
            a+=x;
        }
        for(int i=0; i<n; i++){
            cin>>x;
            b+=x;
        }
        if(a==b) cout<<0<<endl;
        else if(a>b) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
