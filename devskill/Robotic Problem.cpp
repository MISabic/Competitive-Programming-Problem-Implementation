#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define len str.length()
#define fi first
#define si second
using namespace std;

int main()
{
    ll n,m,t,x,y,k,p,q,arr[10000];
    string str;
    cin>>t;
    while(t--){
        cin>>x>>y>>str;
        p=x,q=y;
        char ch='d';
        for(int i=0; i<len; i++){
            if(ch=='n'){
                if(str[i]=='F'){
                    q--;
                }
                else if(str[i]=='L'){
                    ch='d';
                }
                else if(str[i]=='R'){
                    ch='b';
                }
            }
            else if(ch=='u'){
                if(str[i]=='F'){
                    q++;
                }
                else if(str[i]=='L'){
                    ch='b';
                }
                else if(str[i]=='R'){
                    ch='d';
                }
            }
            else if(ch=='d'){
                if(str[i]=='F'){
                    p++;
                }
                else if(str[i]=='L'){
                    ch='u';
                }
                else if(str[i]=='R'){
                    ch='n';
                }
            }
            else if(ch=='b'){
                if(str[i]=='F'){
                    p--;
                }
                else if(str[i]=='L'){
                    ch='n';
                }
                else if(str[i]=='R'){
                    ch='u';
                }
            }
            //cout<<p<<"    "<<q<<endl;
        }
        ll res;
        if(x<p && y<q){
            if(ch=='b' || ch=='n')
                res=1;
            else
                res=2;
        }
        else if(x>p && y>q){
            if(ch=='d' || ch=='u')
                res=1;
            else
                res=2;
        }
        else if(x<p && y>q){
            if(ch=='u' || ch=='b')
                res=1;
            else
                res=2;
        }
        else if(x>p && y<q){
            if(ch=='n' || ch=='d')
                res=1;
            else
                res=2;
        }
        else if(x<p && y==q){
            if(ch=='d')
                res=2;
            else if(ch=='u' || ch=='n')
                res=1;
            else res=0;
        }
        else if(x>p && y==q){
            if(ch=='b')
                res=2;
            else if(ch=='u' || ch=='n')
                res=1;
            else res=0;
        }
        else if(y<q && x==p){
            if(ch=='u')
                res=2;
            else if(ch=='d' || ch=='b')
                res=1;
            else res=0;
        }
        else if(y>q && x==p){
            if(ch=='n')
                res=2;
            else if(ch=='d' || ch=='b')
                res=1;
            else res=0;
        }
        cout<<abs(p-x)+abs(q-y)+res<<endl;
    }
    return 0;
}
