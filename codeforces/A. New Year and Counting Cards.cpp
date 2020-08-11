#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str){
        int cnt=0;
        for(int i=0; i<str.size(); i++)
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || (isdigit(str[i]) && (str[i]-'0')%2!=0))
                ++cnt;
        cout<<cnt<<endl;
    }
    return 0;
}
