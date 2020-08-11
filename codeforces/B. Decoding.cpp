#include<bits/stdc++.h>
#define ll long long
#define mp meke_pair
#define pb push_back
#define fi first
#define si second
#define len str.length()
#define bug cout<<"  helllo  "<<endl

using namespace std;

int main()
{
    ll t,n,p,q,r,s,k,arr[100100];
    double x1,y1,x2,y2;
    string str;
    while(cin>>n>>str){
        if(len%2==0){
            for(int i=len-2; i>=0; i-=2){
                cout<<str[i];
            }
            for(int i=1; i<len; i+=2){
                cout<<str[i];
            }
        }
        else{
            for(int i=len-2; i>=0; i-=2){
                cout<<str[i];
            }
            for(int i=0; i<len; i+=2){
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
