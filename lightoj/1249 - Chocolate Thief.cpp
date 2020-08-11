#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n,l,w,h;
    string str;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n;
        string a,b;
        int mn=1000005,mx=0;
        for(int j=1; j<=n; j++){
            cin>>str>>l>>w>>h;
            if(l*w*h<mn){
                mn=l*w*h;
                a=str;
            }
            if(l*w*h>mx){
                mx=l*w*h;
                b=str;
            }
        }
        if(mn!=mx) cout<<"Case "<<i<<": "<<b<<" took chocolate from "<<a<<endl;
        else cout<<"Case "<<i<<": no thief"<<endl;
    }
}
