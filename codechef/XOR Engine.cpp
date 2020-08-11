#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,q,v;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int e=0,o=0;
        scanf("%d %d",&n,&q);
        for(int j=0; j<n; j++){
            scanf("%d",&v);
            __builtin_parity(v)?++o:++e;
        }
        for(int j=0; j<q; j++){
            scanf("%d",&v);
            __builtin_parity(v)?printf("%d %d\n",o,e):printf("%d %d\n",e,o);
        }
    }
    return 0;
}
