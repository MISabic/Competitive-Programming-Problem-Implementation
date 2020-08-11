#include<cstdio>
using namespace std;

int main()
{
    long long t,n,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",++c,n/2);
    }
    return 0;
}
