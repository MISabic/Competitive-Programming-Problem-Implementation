#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105];
    while(scanf("%d",&n)==1){
        for(int i=1; i<=n; i++) cin>>arr[i];
        int k=1,p=1;
        for(int i=2; i<=n; i++){
            if(arr[k]<arr[i]) k=i;
            if(arr[p]>=arr[i]) p=i;
        }
        if(arr[k]==arr[p])
            cout<<0<<endl;
        else if(k<=p)
            cout<<k-1+n-p<<endl;
        else
            cout<<k-1+n-p-1<<endl;
    }
    return 0;
}
