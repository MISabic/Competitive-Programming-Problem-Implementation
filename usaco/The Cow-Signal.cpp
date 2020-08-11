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
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    ll t,n,a,b,p,q,r,s,m,k,d,x[10],y[10];
    string str;
    while(cin>>m>>n>>p){
        char arr[100][100];
        string str[200];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
                for(int k=0; k<p; k++)
                    str[i*p]+=arr[i][j];
            }
            for(int k=1; k<p; k++){
                str[i*p+k]=str[i*p];
            }
        }
        for(int i=0; i<m*p; i++){
            cout<<str[i]<<endl;
        }
    }
    return 0;
}
