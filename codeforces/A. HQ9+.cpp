#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str){
        int flag=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
