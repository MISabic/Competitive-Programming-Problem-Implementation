#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long k,m,n,p,a,b,q,r,s,t,u,v,arr[200200];
    double x,y;
    string str;
    while(cin>>n>>a>>b){
        ll cnt=0,c=0;
        for(int i=0; i<n; i++){
            cin>>k;
            if(k==1 && a!=0){
                --a;
            }
            else if(k==1 && a==0 && b!=0){
                ++c;
                --b;
            }
            else if(k==1 && a==0 && b==0 && c!=0){
                --c;
            }
            else if(k==1 && a==0 && b==0 && c==0){
                ++cnt;
            }
            if(k==2 && b==0){
                cnt+=2;
            }
            else if(k==2 && b!=0){
                --b;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
