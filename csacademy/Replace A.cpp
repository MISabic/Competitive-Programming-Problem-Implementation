#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define db(x) cout<<"val :: "<<x<<endl
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
using namespace std;

ll arr[202020];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    string str;
    while(cin>>str){
        ll check=1e19,flag=0,res=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='B'){
                cout<<'B';
                flag=0;
            }
            else{
                if(!flag){
                    cout<<'A';
                    flag=1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
