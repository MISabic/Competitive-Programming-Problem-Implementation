#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    while(cin>>n>>str){
        int cnt=0;
        for(int i=1; i<str.length(); i++){
            if(str[i]==str[i-1]) ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
