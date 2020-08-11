#include<bits/stdc++.h>
#define ll long long
#define len str.length()
#define debug cout<<"hello"<<endl
#define debug1(x,y) cout<<x<<"   hello    "<<y<<endl
#define debug1(x,y,z) cout<<x<<"   rasengan    "<<y<<"    kaioken    "<<z<<endl
using namespace std;

int main()
{
    ll t,n,m,p,q,r,s,k,x,y,a,b,arr[10000];
    string str;
    while(cin>>n>>k){
        cin>>str;
        int f=0,g=0,found=0;
        for(int i=0; i<len; i++){
            if(str[i]=='G'){

                for(int j=i; j<len; j+=k){//cout<<" jj  "<<j<<endl;
                    if(str[j]=='T'){
                        found=1;
                    }
                    if(str[j]=='#'){
                        f=1;
                        break;
                    }
                }
                for(int j=i; j>=0; j-=k){ //cout<<" kj  "<<j<<endl;
                    if(str[j]=='T'){
                        found=1;
                    }
                    if(str[j]=='#'){
                        g=1;
                        break;
                    }
                }
                break;
            }
        }
        if(found==1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
