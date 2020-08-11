#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,i,a,b,c,m,k,s,p,q;
    while(cin>>n>>a>>b>>c){
        if(n%2==0){
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%1==0)
                    break;
            }
            k=i-n;
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%2==0)
                    break;
            }
            s=(i-n)/2;
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%3==0)
                    break;
            }
            p=(i-n)/3;
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%6==0)
                    break;
            }
            m=(i-n)/6;
            ll res=min(k*a,min(s*b,p*c));
            cout<<min(res,m*(a+b+c))<<endl;
        }
        else{
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%1==0)
                    break;
            }
            k=i-n;
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%3==0)
                    break;
            }
            s=(i-n)/3;
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%3==0)
                    break;
            }
            p=(i-n)/3;
            for(i=n; ; i++){
                if(i%4==0 && (i-n)%5==0)
                    break;
            }
            q=(i-n)/5;
            ll res=min(k*a,min(s*c,min(p*(a+b),q*(b+c))));
            cout<<res<<endl;
        }
    }
    return 0;
}
