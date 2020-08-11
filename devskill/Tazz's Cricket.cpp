#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int run=0;
        while(n!=0){
            scanf("%d",&k);
            if(k==0) --n;
            else run+=k;
        }
        printf("Case %d: %d\n",++c,run);
    }
    return 0;
}
