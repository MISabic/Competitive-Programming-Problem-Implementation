#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

set<long long>st;

void divisors(long long n)
{
	for (long long i=1; i<=sqrt(n)+1; i++)
	{
		if (n%i==0)
		{
			if (n/i == i){
				st.insert(i);
			}
			else{
				st.insert(i);
				st.insert(n/i);
			}
		}
	}
}

int main()
{
    ll t,n,m,k,p,q,y,r,s,a,b,c;
    while(cin>>p>>y){
        ll check=1e19,ind=0,res=0,ans=0,ok=0;
        if(p==2){
            if(y==2) cout<<-1<<endl;
            else if(y%2==0) cout<<y-1<<endl;
            else cout<<y<<endl;
        }
        else{
            ll range=1000;
            for(ll j=y; j>=max(2LL,y-range); j--){//cout<<j<<endl;
                //if(j%2==0 || j%3==0) continue;

                divisors(j);
                ll flag=0;
                set<long long>::iterator it=st.begin();
                for(it; it!=st.end(); it++){    //cout<<*it<<endl;
                    if((*it)!=1 && (*it)<=p){
                        flag=1;
                    }
                }
                if(flag==0){
                    cout<<j<<endl;
                    ok=1;
                    break;
                }
                st.clear();
            }
            if(ok==0) cout<<-1<<endl;
        }
    }
    return 0;
}
