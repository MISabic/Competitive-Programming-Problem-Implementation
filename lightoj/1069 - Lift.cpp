#include<bits/stdc++.h>
using namespace std;

double arr[1000010];

int main()
{
    int c,n,l;
    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        scanf("%d %d",&n,&l);
        long long res=n*4+19+abs(l-n)*4;
        printf("Case %d: %lld\n",i,res);
    }
    return 0;
}
