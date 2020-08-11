#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
using namespace std;

int main()
{
    long long t,a,b,c,n,m,k,p,q,r,s,u,v,arr[100100];
    double x,y;
    string str;
    while(cin>>a>>b>>n){
        p=0,q=0,c=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(p+arr[i]<=a && (a-p)>=(b-q)) p+=arr[i];
            else if(q+arr[i]<=b && (a-p)<=(b-q)) q+=arr[i];
            else c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

