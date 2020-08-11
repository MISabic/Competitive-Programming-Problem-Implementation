#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long k,m,n,p,a,b,q,r,s,t,u,v,arr[200];
    double x,y;
    string str;
    while(cin>>n){
        ll cnt=0,state=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<n; i++){//cout<<" hello "<<endl;
            if(state==0){
                if(arr[i-1]==arr[i]){
                    state=1;
                }
                else if(arr[i-1]>arr[i]){
                    state=2;
                }
            }
            else if(state==1){
                if(arr[i-1]<arr[i]){ //cout<<" k "<<endl;
                    state=4;
                    break;
                }
                else if(arr[i-1]>arr[i]){
                    state=2;
                }
            }
            else if(state==2){
                if(arr[i-1]<arr[i] || arr[i-1]==arr[i]){
                    state=4;
                    break;
                }
            }
        }
        if(state==4) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
