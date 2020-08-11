#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,m,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&m);
        long long a=(long long)sqrt(m);
        long long b=(long long)sqrt(m)+1;
        long long k1=(a)*(a)-m;
        long long k2=(b)*(b)-m;
        if(abs(k1)<abs(k2))
            printf("Case %lld: %lld %lld\n",++c,a,k1);
        else
            printf("Case %lld: %lld %lld\n",++c,b,k2);
    }
    return 0;
}
