#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define si second
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
using namespace std;

int main()
{
    //read;
    //write;
    ll t,n,m,k,p,q,r,s,u,v,a,b,c=0,arr[100100];
    double x,y;
    string str,ftr;
    while(cin>>str>>ftr){
        int flag=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]<ftr[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<str.length(); i++){
            if(str[i]==ftr[i]){
                //char ch=(char)((int)str[i] + 1);
                cout<<str[i];
            }
            else{
                cout<<ftr[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
