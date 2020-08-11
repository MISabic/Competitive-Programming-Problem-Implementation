#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        long long ones=0,flag=0,pos=0,sec=0,sz=str.length();
        for(int i=0; i<sz; i++){
            if(str[i]=='1'){
                flag=1;
                pos=i;
                ++ones;
            }
            if(str[i]=='0' && flag==1){
                while(str[i]=='0') ++i;
                --i;
                sec+=((i-pos+1)*ones);
            }
        }
        cout<<sec<<endl;
    }
    return 0;
}
