#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[202020];

int main()
{
    ll t,n,m,p,k,q,r,s,a,b,c;
    while(cin>>s>>m){
        ll check=0,ok=s,flag=0,ind,res=0;
        for(int i=s; i<=m; i++){
            res=0;
            n=i;
            if(n==0) ++res;
            while(n){
                ind=n%10;
                n/=10;
                if(ind==0 || ind==6 || ind==9){
                    ++res;
                }
                else if(ind==8) res+=2;
            }

            //cout<<i<<"  "<<res<<endl;
            if(res>check){
                check=res;
                ok=i;
            }
        }
        cout<<ok<<endl;
    }
    return 0;
}
