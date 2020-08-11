#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str){
        int l=0,u=0;
        for(int i=0; i<str.length(); i++){
            if(isupper(str[i])) ++u;
            if(islower(str[i])) ++l;
        }
        if(l>=u)
            for(int i=0; i<str.length(); i++){
                char ch=tolower(str[i]);
                cout<<ch;
            }
        else
            for(int i=0; i<str.length(); i++){
                char ch=toupper(str[i]);
                cout<<ch;
            }
        cout<<endl;
    }
    return 0;
}
