#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("B-small-practice.in","r",stdin)
#define write freopen("out.out","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    ll n,k,l,r,c=0;
    string str,temp;
    cin>>n;
    while(n--){
        cin>>temp;
        int flag=0,pos;
        str.clear();
        for(int i=0; i<temp.length(); i++){
            if(temp[i]!='0') flag=1;
            if(flag!=0) str+=temp[i];
        }
        for(int i=0; i<str.length()-1; i++){
            if(str[i]>str[i+1]){
                char temp=((str[i]-'0')-1)+'0';
                while(i>=0 && str[i]>temp){
                    str[i]=temp;
                    if(i-1>=0 && str[i-1]>temp) --i;
                }
                for(int j=i+1; j<str.size(); j++){
                    str[j]='9';
                }
                break;
            }
        }
        if(str[0]=='0') printf("Case #%lld: %s\n",++c,&str[1]);
        else printf("Case #%lld: %s\n",++c,str.c_str());
    }
    return 0;
}


