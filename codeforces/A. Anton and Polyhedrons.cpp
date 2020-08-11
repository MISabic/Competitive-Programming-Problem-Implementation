#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,p,q,r,s,k,u,v,arr[100100];
    double x,y;
    string str;
    map<string,int>mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    while(cin>>n){
        long long res=0;
        for(int i=0; i<n; i++){
            cin>>str;
            res+=mp[str];
        }
        cout<<res<<endl;
    }
    return 0;
}
