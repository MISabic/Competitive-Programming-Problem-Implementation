#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s,a,b,c;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>a>>b>>c){
        ll cnt=1,chidori=1,tot=0;

        while(cnt!=n){
            if(chidori==1){
                if(a<=b){
                    tot+=a;
                    chidori=2;
                }
                else{
                    tot+=b;
                    chidori=3;
                }
                ++cnt;
            }
            else if(chidori==2){
                if(a<=c){
                    tot+=a;
                    chidori=1;
                }
                else{
                    tot+=c;
                    chidori=3;
                }
                ++cnt;
            }
            else{
                if(b<=c){
                    tot+=b;
                    chidori=1;
                }
                else{
                    tot+=c;
                    chidori=2;
                }
                ++cnt;
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}
