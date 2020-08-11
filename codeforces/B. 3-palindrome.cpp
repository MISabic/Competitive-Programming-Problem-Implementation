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
    while(cin>>n){
        int flag=0;
        for(int i=0; i<n; i++){
            if(flag==0 || flag==1){
                cout<<'a';
                ++flag;
            }
            else if(flag==2 || flag==3){
                cout<<'b';
                ++flag;
                if(flag==4) flag=0;
            }
        }
        cout<<endl;
    }
    return 0;
}


