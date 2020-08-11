#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,arr[100010];
    string str;
    while(cin>>str){
        stack<char>st;
        for(int i=0; i<str.length(); i++){
            if(st.empty()){
                st.push(str[i]);
            }
            else if(st.top()=='A' && str[i]=='B'){
                st.pop();
            }
            else{
                st.push(str[i]);
            }
        }
        if(st.empty())
            cout<<"Sim"<<endl;
        else
            cout<<"Nao"<<endl;
    }
    return 0;
}


