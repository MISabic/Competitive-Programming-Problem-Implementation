#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str){
        set<string>st;
        for(int i=0; i<str.length(); i++){
            st.insert(str.substr(i,str.length())+str.substr(0,i));
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
