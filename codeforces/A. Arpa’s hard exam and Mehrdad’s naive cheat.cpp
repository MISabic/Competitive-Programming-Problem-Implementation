#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
using namespace std;

int main()
{
    ll t,n,p,q,r,s,arr[100100];
    string str;
    while(cin>>n){
        if(n==0) cout<<1<<endl;
        else if(n%4==0) cout<<6<<endl;
        else if(n%4==1) cout<<8<<endl;
        else if(n%4==2) cout<<4<<endl;
        else if(n%4==3) cout<<2<<endl;
    }
    return 0;
}
