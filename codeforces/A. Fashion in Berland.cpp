#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=0,arr[2000];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        if(arr[i]==0) ++f;
    if(n==1 && f==0) cout<<"YES\n";
    else if(f==1 && n!=1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

