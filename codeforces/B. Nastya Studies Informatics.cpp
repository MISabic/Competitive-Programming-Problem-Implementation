#include <bits/stdc++.h>
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
	long long l,r,x,n;
	while(cin>>l>>r>>x>>n){
        long long cnt=0;
        divisors(n);
        set<long long>::iterator it=st.begin();
        for(it; it!=st.end(); it++){    //cout<<*it<<endl;
            //if((n-(*it))!=0 && (n-(*it))%(*it)==0){
                //cout<< *it <<endl;
                set<long long>::iterator it2=it;
                for(it2; it2!=st.end(); it2++){    //cout<< "    "<< *it2 <<endl;
                    if(it!=it2){
                        long long a = *it;
                        long long b = *it2;     //cout<<a<<"  "<<b<<"  "<<__gcd(a,b)<<"  "<<((a,b)/__gcd(a,b))<<endl;
                        if(a>=l && a<=r && b>=l && b<=r && __gcd(a,b) == x && ((a*b)/__gcd(a,b)) == n){
                            cnt+=2;  //cout<<a<<"  "<<b<<endl;
                        }
                    }
                    else{
                        long long a = *it;
                        long long b = *it2;     //cout<<a<<"  "<<b<<"  "<<__gcd(a,b)<<"  "<<((a,b)/__gcd(a,b))<<endl;
                        if(a>=l && a<=r && __gcd(a,b) == x && ((a*b)/__gcd(a,b)) == n){
                            ++cnt;  //cout<<a<<"  "<<b<<endl;
                        }
                    }
                }
            //}
        }
        //cnt*=2;
        cout<<cnt<<endl;
        st.clear();
	}
	return 0;
}
