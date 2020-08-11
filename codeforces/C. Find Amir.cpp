#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long t,a,b,c=0,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    memset(arr,0,sizeof(arr));
    for(int i=3; i<100005; i+=2){
        ++c;
        arr[i]=arr[i+1]=c;
    }
    while(cin>>n){
        if(n==1) cout<<0<<endl;
        else if(n==2) cout<<0<<endl;
        else cout<<arr[n]<<endl;
    }
    return 0;
}


