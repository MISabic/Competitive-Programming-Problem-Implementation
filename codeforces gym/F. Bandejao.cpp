#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0;
    while(cin>>n>>k){
        int val=k*k;
        if(k<=(n+1) && (n+1)%k==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
