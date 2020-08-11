#include<bits/stdc++.h>
using namespace std;

int n,arr[1000000];

int solve(int i,int k)
{
    if(i==n) return -1;
    if(arr[i]==k) return i;
    solve(++i,k);
}

int main()
{
    int q,k,c=0;
    while(cin>>n>>q && n || q){
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        printf("CASE# %d:\n",++c);
        for(int j=0; j<q; j++){
            cin>>k;
            int val=solve(0,k);
            (val!=-1) ? printf("%d found at %d\n",k,val+1) : printf("%d not found\n");
        }
    }
    return 0;
}
