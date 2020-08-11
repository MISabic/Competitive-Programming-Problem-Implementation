#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int p=0,q=0;
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            scanf("%d",&v);
            if(v>0) ++q;
            p+=abs(v);
        }
        int gcd=__gcd(p,q);
        if(q==0) printf("Case %d: inf\n",i);
        else printf("Case %d: %d/%d\n",i,p/gcd,q/gcd);
    }
    return 0;
}
