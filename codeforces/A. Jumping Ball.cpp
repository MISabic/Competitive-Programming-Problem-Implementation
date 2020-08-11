#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("A-large.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    int n,l,r;
    string str;
    while(cin>>n){
        cin>>str;
        int c=0,d=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='<') ++c;
            else break;
            //if(str[i]=='>') ++d;
        }
        for(int i=str.length()-1; i>=0; i--){
            if(str[i]=='>') ++d;
            else break;
            //if(str[i]=='>') ++d;
        }
        cout<<c+d<<endl;
    }
    return 0;
}
