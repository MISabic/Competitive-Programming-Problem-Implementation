#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n==0) return 0;
    if(n%3==2) return (n/3)*2+1;
    else return (n/3)*2;
}

int main()
{
    int c,x,y;
    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        scanf("%d %d",&x,&y);
        printf("Case %d: %d\n",i,solve(y)-solve(x-1));
    }
    return 0;
}
