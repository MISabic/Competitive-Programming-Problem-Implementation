#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int ss=0,wo=0;
        for(int i=1; i<str.length(); i++){
            if(str[i-1]=='S' && str[i]=='S') ++ss;
            else if(str[i-1]=='S' && str[i]!='S')++wo;
        }
        printf("Case %d: %d / %d\n",++c,ss,wo);
    }
    return 0;
}
