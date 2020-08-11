#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d;
    string a,b,c,e="naya",f="nobo";
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(b==e)
            cout<<"Shuvo nobo borsho "<<d-650<<endl;
        else
            cout<<"Shuva naya barsha "<<d+650<<endl;;
    }
    return 0;
}
