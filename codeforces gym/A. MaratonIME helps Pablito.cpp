#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b;
    while(cin>>t){
        for(int i=0; i<t; i++){
            cin>>a>>b;
            if(__gcd(a,b)!=1)
                cout<<"Sim"<<endl;
            else
                cout<<"Nao"<<endl;
        }
    }
    return 0;
}
