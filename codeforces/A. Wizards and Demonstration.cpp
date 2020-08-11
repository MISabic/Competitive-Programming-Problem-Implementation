#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        int v=ceil(a*(c/100.0))-b;
        (v<0)?(cout<<0<<endl):(cout<<v<<endl);
    }
    return 0;
}
