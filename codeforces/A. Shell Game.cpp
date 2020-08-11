#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,m,p,q,r,k,arr[100100];
    string str;
    double x,y;
    while(cin>>n>>k){
        if(n%6==0){
            if(k==0) cout<<0<<endl;
            if(k==1) cout<<1<<endl;
            if(k==2) cout<<2<<endl;
        }
        else if(n%6==1){
            if(k==0) cout<<1<<endl;
            if(k==1) cout<<0<<endl;
            if(k==2) cout<<2<<endl;
        }
        else if(n%6==2){
            if(k==0) cout<<1<<endl;
            if(k==1) cout<<2<<endl;
            if(k==2) cout<<0<<endl;
        }
        else if(n%6==3){
            if(k==0) cout<<2<<endl;
            if(k==1) cout<<1<<endl;
            if(k==2) cout<<0<<endl;
        }
        else if(n%6==4){
            if(k==0) cout<<2<<endl;
            if(k==1) cout<<0<<endl;
            if(k==2) cout<<1<<endl;
        }
        else if(n%6==5){
            if(k==0) cout<<0<<endl;
            if(k==1) cout<<2<<endl;
            if(k==2) cout<<1<<endl;
        }
    }
    return 0;
}
