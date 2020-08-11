#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[5555];

int main()
{
    ll t,keep,n,m,p,k,q,r,s,a,b,c;
    while(cin>>a>>b){
        b=b%(a*2);
        while(1){
            if(a==0 || b==0){
                break;
            }
            if(a>=(b*2)){
                a=(a%(b*2));
            }
            else if(b>=(a*2)){
                b=(b%(a*2));
            }
            else break;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

