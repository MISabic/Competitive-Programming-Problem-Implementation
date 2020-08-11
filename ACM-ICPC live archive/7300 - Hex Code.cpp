#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int val;
    while(cin>>str){
        string fin="";
        for(int i=0; i<str.length(); i+=2){
            string num="";
            num+=str[i];
            num+=str[i+1];
            stringstream ss;
            ss<<num;
            ss>>hex>>val;
            fin+=(char)val;
        }
        cout<<fin<<endl;
    }
    return 0;
}
