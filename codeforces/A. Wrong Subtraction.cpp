#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>n>>k){
        int o=0,sum=0,ok=0,tot=0;
        for(int i=0; i<k; i++){
            if((n%10)!=0){
                --n;
            }
            else{
                n=n/10;
            }
        }
        cout<<n<<endl;
        /*if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }*/
    }
    return 0;
}
