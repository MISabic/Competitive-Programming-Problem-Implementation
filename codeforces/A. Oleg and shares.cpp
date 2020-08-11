#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long t,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>n>>k){
        ll flag=0,res=0,mn=999999999999;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mn=min(mn,arr[i]);
        }
        for(int i=0; i<n; i++){
            if((arr[i]-mn)%k!=0){
                flag=1;
            }
        }
        if(flag==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            res+=((arr[i]-mn)/k);
        }
        cout<<res<<endl;
    }
    return 0;
}
