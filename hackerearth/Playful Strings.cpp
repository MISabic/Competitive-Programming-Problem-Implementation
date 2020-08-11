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
    ll n,l,r,c=0;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        int c=0;
        for(int i=1; i<str.length(); i++){
            if((str[i]=='a' && str[i-1]=='z') || (str[i]=='z' && str[i-1]=='a')){
                ++c;    //cout<<c<<endl;
            }
            else if(abs(str[i]-str[i-1])==1){
                //cout<<abs(str[i]-str[i-1])<<"     "<<abs(str[i]-str[i+1])<<endl;
                ++c;
            }
        }
        if(c==str.length()-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
