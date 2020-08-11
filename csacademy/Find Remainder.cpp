#include<bits/stdc++.h>
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
    long long n,k,a[100100];
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long mx=0;
        for(int i=0; i<n; i++){
            cin>>k;
            mx=max(mx,k+1);
            a[i]-=k;
        }
        long long res=0;
        for(int i=0; i<n; i++){
            res=__gcd(res,a[i]);
        }
        //cout<<res<<"  "<<mx<<endl;
        if(res==0) cout<<mx<<endl;
        else if(res<mx) cout<<-1<<endl;
        else{
            divisors(res);
            for(auto x:st){ //cout<<"gg "<<(*it)<<"   "<<mx<<endl;
                if(x>=mx){
                    int flag=0;
                    for(int i=0; i<n; i++){
                        if(a[i]%x!=0){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        res=x;
                        break;
                    }
                }
            }
            if(res==0) cout<<-1<<endl;
            else cout<<res<<endl;
        }
    }
    return 0;
}
