#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long c,n;
    string str;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>str>>n;
        long long div=0,j=(str[0]=='-')?1:0;
        for(j; j<str.length(); j++){
            div=(div*10+(str[j]-'0'))%n;
        }
        if(!div) cout<<"Case "<<i<<": divisible"<<endl;
        else cout<<"Case "<<i<<": not divisible"<<endl;
    }
    return 0;
}
