#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    scanf("%lld",&n);
    while(n--){
        scanf("%I64d %I64d",&a,&b);
        printf("%I64d\n",max(a,b)*max(a,b));
    }
    return 0;
}
