#include<bits/stdc++.h>
using namespace std;

double arr[100010];

int main()
{
    long long n,x,y,q,a;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>x>>y;
            double k=sqrt(x*x+y*y);
            arr[i]=k;
        }
        sort(arr,arr+n);
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>a;
            int val=upper_bound(arr,arr+n,a)-arr;
            cout<<val<<endl;
        }
    }
    return 0;
}
