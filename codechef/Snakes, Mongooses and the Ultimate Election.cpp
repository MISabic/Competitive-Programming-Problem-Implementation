#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    while(cin>>t){
        for(int i=0; i<t; i++){
            cin>>str;
            int n=str.length();
            for(int i=0; i<n; i++){
                if(str[i]=='m' && (i-1>=0 && str[i-1]=='s')){
                    str[i-1]='#';
                }
                else if(str[i]=='m' && (i+1<n && str[i+1]=='s')){
                    str[i+1]='#';
                }
            }
            int s=0,m=0;
            for(int i=0; i<n; i++){
                if(str[i]=='s') ++s;
                else if(str[i]=='m') ++m;
            }
            if(s>m) cout<<"snakes"<<endl;
            else if(m>s) cout<<"mongooses"<<endl;
            else cout<<"tie"<<endl;
        }
    }
    return 0;
}
