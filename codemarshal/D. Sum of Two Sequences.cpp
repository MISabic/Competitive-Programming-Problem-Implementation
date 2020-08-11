#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a1,d1,k1,a2,d2,k2,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld %lld %lld %lld",&a1,&d1,&k1,&a2,&d2,&k2);

        long long p1=(((k1*(k1-1))/2)*d1);

        long long q1=p1+((a1)*k1);

        long long p2=(((k2*(k2-1))/2)*d2);

        long long q2=p2+((a2)*k2);

        long long res=q1+q2;

        printf("Case %lld: %lld\n",++c,res);
    }
    return 0;
}
