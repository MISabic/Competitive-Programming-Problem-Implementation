#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str){
        cout<<str;
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}
