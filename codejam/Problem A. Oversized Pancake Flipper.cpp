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
    ll n,k,l,r,c=0;
    string str;
    cin>>n;
    while(n--){
        cin>>str>>k;
        ll sz=str.length(),con=0,flag=0;
        for(int i=0; i<=sz-k; i++){
            if(str[i]=='-'){
                ++con;
                for(int j=i; j<i+k; j++){
                    if(str[j]=='+') str[j]='-';
                    else str[j]='+';
                }
            }
        }
        for(int i=0; i<sz; i++){
            if(str[i]=='-'){
                flag=1;
                break;
            }
        }
        if(flag==1) printf("Case #%lld: IMPOSSIBLE\n",++c);
        else printf("Case #%lld: %lld\n",++c,con);
    }
    return 0;
}

