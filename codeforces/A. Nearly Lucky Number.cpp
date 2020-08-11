#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str){
        int cnt=0,flag=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]-'0'==4 || str[i]-'0'==7){
                ++cnt;
            }
        }
        while(1){
            if(cnt%10!=4 && cnt%10!=7){
                flag=1;
                break;
            }
            cnt/=10;
            if(cnt==0) break;
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
