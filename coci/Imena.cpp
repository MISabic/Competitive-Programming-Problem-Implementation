#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    string str;
    while(cin>>n){
        int con=0;
        while(n){
            cin>>str;
            if(toupper(str[0])==str[0]){
                int flag=0;
                for(int i=1; i<str.length(); i++){
                    if(isdigit(str[i]) || (ispunct(str[i]) && i!=str.length()-1) || tolower(str[i])!=str[i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0) ++con;
            }
            if(ispunct(str[str.length()-1])){
                cout<<con<<endl;
                con=0;
                --n;
            }
        }
    }
    return 0;
}
