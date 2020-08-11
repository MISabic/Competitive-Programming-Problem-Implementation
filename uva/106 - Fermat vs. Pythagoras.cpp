#include<bits/stdc++.h>
using namespace std;

int check[1000010];

int main()
{
    long long n;
    while(cin>>n){
        long long cnt=0,tot=0;
        for(long long i=1; i*i<=n; i++){
            for(long long j=i+1; j*j<=n; j+=2){
                if(__gcd(i,j)==1){
                    long long a=i*i+j*j;
                    long long b=2*i*j;
                    long long c=j*j-i*i;
                    if(a>n) break;
                    int p=1;
                    while(a*p<=n){
                        check[a*p]=1;
                        check[b*p]=1;
                        check[c*p]=1;
                        ++p;
                    }
                    ++cnt;
                }
            }
        }
        for(int i=1; i<=n; i++){
            tot+=check[i];
            check[i]=0;
        }
        cout<<cnt<<" "<<n-tot<<endl;
    }
    return 0;
}
