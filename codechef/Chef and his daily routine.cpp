#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int flag=0;
        for(int i=0; i<str.length()-1; i++){
            if(str[i]>str[i+1]) flag=1;
        }
        (!flag)?(cout<<"yes"<<endl):(cout<<"no"<<endl);
    }
    return 0;
}

