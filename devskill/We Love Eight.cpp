#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
    int n;
    cin>>n;
    while(n--){
        cin>>str;
        int num=(str[str.length()-1]-'0')+(str[str.length()-2]-'0')*10+(str[str.length()-3]-'0')*100;
        if(num%8==0){
            if(str[0]=='A')
                cout<<"YES"<<endl<<1<<endl;
            else
                cout<<"YES"<<endl<<0<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
