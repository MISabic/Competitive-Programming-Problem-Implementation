#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    string str;
    while(cin>>str){
        if(str[1]=='+')
            cout<< (str[0]-'0')+(str[2]-'0') <<endl;
        else
            cout<< (str[0]-'0')-(str[2]-'0') <<endl;
    }
    return 0;
}
