#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long v1,v2,t1,t2,n,k,m,p,q,r,s,u,v,arr[100100];
    string str;
    while(cin>>k>>v1>>v2>>t1>>t2){
        long long res1=t1+(v1*k)+t1;
        long long res2=t2+(v2*k)+t2;
        if(res1==res2) cout<<"Friendship"<<endl;
        else if(res1<res2) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}

